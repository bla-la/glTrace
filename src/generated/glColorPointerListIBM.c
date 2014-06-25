#include <glTraceCommon.h>
#include <generated.h>

#define glColorPointerListIBM_wrp						\
    ((void  (*)(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glColorPointerListIBM_Idx))


GLAPI void  APIENTRY glColorPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColorPointerListIBM_Idx))
	{
            GL_ENTRY_PTR(glColorPointerListIBM_Idx) = dlsym(RTLD_NEXT,"glColorPointerListIBM");
            if(!GL_ENTRY_PTR(glColorPointerListIBM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColorPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glColorPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColorPointerListIBM_wrp(size,type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColorPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColorPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glColorPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColorPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glColorPointerListIBM_Idx));
        if(last_diff > 1000000000){
            printf("glColorPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColorPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glColorPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glColorPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColorPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColorPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColorPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColorPointerListIBM_Idx) = get_ts();
        }


	

}