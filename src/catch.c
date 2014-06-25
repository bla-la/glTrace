#include <glTraceCommon.h>
#include <generated.h>

typedef void (*__GLXextFuncPtr)(void);


long long glGenTextures_call = 0;
long long glGenTextures_time = 0;


long long glFinish_call = 0;
long long glFinish_time = 0;
long long glFlush_call = 0;
long long glFlush_time = 0;






void (*real_glGenTextures)( GLsizei n,
			    GLuint *textures) = NULL;
void (*real_glFlush)() = NULL;
void (*real_glFinish)() = NULL;
void (*real_glXSwapBuffers)( Display *dpy, GLXDrawable drawable ) = NULL;

void glXSwapBuffers( Display *dpy, GLXDrawable drawable )
{
    if(!real_glXSwapBuffers)
    {
        real_glXSwapBuffers = dlsym(RTLD_NEXT,"glXSwapBuffers");
        if(!real_glXSwapBuffers)
            abort();
    }
    printf("glXSwapBuffers\n");

    real_glXSwapBuffers(dpy,drawable);
}






