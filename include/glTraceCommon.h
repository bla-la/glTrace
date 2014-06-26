#ifndef __GL_TRACE_COMMON_H__
#define __GL_TRACE_COMMON_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define __USE_GNU
#include <dlfcn.h>

#include <lock.h>

#include <X11/Xlib.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glext.h>
typedef uint64_t GLuint64;
typedef int64_t GLint64;
typedef GLint GLfixed;
typedef struct __GLsync *GLsync;


typedef void (APIENTRY  *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (APIENTRY  *GLDEBUGPROCAMD)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);

long long ts_diff(struct timespec *start, struct timespec *end);
#define tstons(x)((x.tv_sec * 1000000000) + x.tv_nsec)
#define get_ts()				\
    ({ struct timespec st;			\
    clock_gettime(CLOCK_REALTIME,&st);			\
    tstons(st);						\
})
#define get_ns_diff(x,y)(y - x)


struct callEntry
{
    char * name;
    void (*func_ptr)(void *);
    long long callCount;
    long long callTime;
    long long prevCallStamp;
    long long lastCallStamp;
    void * trace;
    void * udata;
};

extern struct callEntry callTable[];

#define customIdx	dumyIdx
#define CUSTOM_DECLARE	{0}


#define DECLARE_CALL_ENTRY(name) {name,0,0,0,0,0}
#define GL_ENTRY(idx)(callTable[idx])
#define GL_ENTRY_CALL_COUNT(idx)(GL_ENTRY(idx).callCount)
#define GL_ENTRY_CALL_TIME(idx)(GL_ENTRY(idx).callTime)
#define GL_ENTRY_PTR(idx)(GL_ENTRY(idx).func_ptr)
#define GL_ENTRY_PREV_TS(idx)(GL_ENTRY(idx).prevCallStamp)
#define GL_ENTRY_LAST_TS(idx)(GL_ENTRY(idx).lastCallStamp)


extern spinlock __init_lock;
extern int __is_init;


static __inline void
initCallEntry()
{
    int i = 1;
    spin_lock(&__init_lock);
    if(VOLATILE(int,__is_init))
    {
	spin_unlock(&__init_lock);
	return;
    }
    while(callTable[i].name)
    {
	callTable[i].func_ptr = dlsym(RTLD_NEXT,callTable[i].name);
	i++;
    }

    VOLATILE(int,__is_init) = 1;
    spin_unlock(&__init_lock);
}


#endif
