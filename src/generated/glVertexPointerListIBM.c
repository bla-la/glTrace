#include <glTraceCommon.h>
#include <generated.h>

#define glVertexPointerListIBM_wrp						\
    ((void  (*)(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glVertexPointerListIBM_Idx))


GLAPI void  APIENTRY glVertexPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexPointerListIBM_Idx))
	{
            GL_ENTRY_PTR(glVertexPointerListIBM_Idx) = dlsym(RTLD_NEXT,"glVertexPointerListIBM");
            if(!GL_ENTRY_PTR(glVertexPointerListIBM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexPointerListIBM_wrp(size,type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glVertexPointerListIBM_Idx));
        if(last_diff > 1000000000){
            printf("glVertexPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexPointerListIBM_Idx) = get_ts();
        }


	

}