#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixIndexPointerARB_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glMatrixIndexPointerARB_Idx))


GLAPI void  APIENTRY glMatrixIndexPointerARB(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixIndexPointerARB_Idx))
	{
            GL_ENTRY_PTR(glMatrixIndexPointerARB_Idx) = dlsym(RTLD_NEXT,"glMatrixIndexPointerARB");
            if(!GL_ENTRY_PTR(glMatrixIndexPointerARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixIndexPointerARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixIndexPointerARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixIndexPointerARB_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixIndexPointerARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixIndexPointerARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixIndexPointerARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixIndexPointerARB_Idx),
				 GL_ENTRY_LAST_TS(glMatrixIndexPointerARB_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixIndexPointerARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexPointerARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixIndexPointerARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixIndexPointerARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixIndexPointerARB_Idx) = get_ts();
        }


	

}