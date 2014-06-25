#include <glTraceCommon.h>
#include <generated.h>

#define glColorPointer_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glColorPointer_Idx))


GLAPI void  APIENTRY glColorPointer(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorPointer_Idx))
	{
            GL_ENTRY_PTR(glColorPointer_Idx) = dlsym(RTLD_NEXT,"glColorPointer");
            if(!GL_ENTRY_PTR(glColorPointer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorPointer_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glColorPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorPointer_Idx),
				 GL_ENTRY_LAST_TS(glColorPointer_Idx));
        if(last_diff > 1000000000){
            printf("glColorPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorPointer_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointer_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorPointer_Idx) = get_ts();
        }


	

}