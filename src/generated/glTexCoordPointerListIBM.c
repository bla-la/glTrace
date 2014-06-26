#include <glTraceCommon.h>
#include <generated.h>

#define glTexCoordPointerListIBM_wrp						\
    ((void  (*)(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glTexCoordPointerListIBM_Idx))


GLAPI void  APIENTRY glTexCoordPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexCoordPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexCoordPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexCoordPointerListIBM_wrp(size,type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexCoordPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexCoordPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glTexCoordPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexCoordPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glTexCoordPointerListIBM_Idx));


        if(last_diff > 1000000000){
            printf("glTexCoordPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexCoordPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glTexCoordPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexCoordPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexCoordPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexCoordPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexCoordPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexCoordPointerListIBM_Idx) = get_ts();
        }


	

}