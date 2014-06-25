#include <glTraceCommon.h>
#include <generated.h>

#define glFlushStaticDataIBM_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glFlushStaticDataIBM_Idx))


GLAPI void  APIENTRY glFlushStaticDataIBM(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFlushStaticDataIBM_Idx))
	{
            GL_ENTRY_PTR(glFlushStaticDataIBM_Idx) = dlsym(RTLD_NEXT,"glFlushStaticDataIBM");
            if(!GL_ENTRY_PTR(glFlushStaticDataIBM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFlushStaticDataIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushStaticDataIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushStaticDataIBM_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushStaticDataIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushStaticDataIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushStaticDataIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushStaticDataIBM_Idx),
				 GL_ENTRY_LAST_TS(glFlushStaticDataIBM_Idx));
        if(last_diff > 1000000000){
            printf("glFlushStaticDataIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushStaticDataIBM_Idx),
	             GL_ENTRY_CALL_TIME(glFlushStaticDataIBM_Idx),
	             GL_ENTRY_CALL_TIME(glFlushStaticDataIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushStaticDataIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushStaticDataIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushStaticDataIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushStaticDataIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushStaticDataIBM_Idx) = get_ts();
        }


	

}