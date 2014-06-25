#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixIndexubvARB_wrp						\
    ((void  (*)(GLint size,const GLubyte *indices                                        \
    ))GL_ENTRY_PTR(glMatrixIndexubvARB_Idx))


GLAPI void  APIENTRY glMatrixIndexubvARB(GLint size,const GLubyte *indices)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMatrixIndexubvARB_Idx))
	{
            GL_ENTRY_PTR(glMatrixIndexubvARB_Idx) = dlsym(RTLD_NEXT,"glMatrixIndexubvARB");
            if(!GL_ENTRY_PTR(glMatrixIndexubvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMatrixIndexubvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixIndexubvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixIndexubvARB_wrp(size,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixIndexubvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixIndexubvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixIndexubvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixIndexubvARB_Idx),
				 GL_ENTRY_LAST_TS(glMatrixIndexubvARB_Idx));
        if(last_diff > 1000000000){
            printf("glMatrixIndexubvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixIndexubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexubvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixIndexubvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixIndexubvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixIndexubvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixIndexubvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixIndexubvARB_Idx) = get_ts();
        }


	

}