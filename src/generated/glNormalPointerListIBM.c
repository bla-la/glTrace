#include <glTraceCommon.h>
#include <generated.h>

#define glNormalPointerListIBM_wrp						\
    ((void  (*)(GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glNormalPointerListIBM_Idx))


GLAPI void  APIENTRY glNormalPointerListIBM(GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNormalPointerListIBM_Idx))
	{
            GL_ENTRY_PTR(glNormalPointerListIBM_Idx) = dlsym(RTLD_NEXT,"glNormalPointerListIBM");
            if(!GL_ENTRY_PTR(glNormalPointerListIBM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNormalPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glNormalPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNormalPointerListIBM_wrp(type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNormalPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNormalPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glNormalPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNormalPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glNormalPointerListIBM_Idx));
        if(last_diff > 1000000000){
            printf("glNormalPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNormalPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glNormalPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glNormalPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNormalPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNormalPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNormalPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNormalPointerListIBM_Idx) = get_ts();
        }


	

}