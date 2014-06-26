#include <glTraceCommon.h>
#include <generated.h>

#define glMultiModeDrawElementsIBM_wrp						\
    ((void  (*)(const GLenum *mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount,GLint modestride                                        \
    ))GL_ENTRY_PTR(glMultiModeDrawElementsIBM_Idx))


GLAPI void  APIENTRY glMultiModeDrawElementsIBM(const GLenum *mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei primcount,GLint modestride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiModeDrawElementsIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiModeDrawElementsIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiModeDrawElementsIBM_wrp(mode,count,type,indices,primcount,modestride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiModeDrawElementsIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiModeDrawElementsIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiModeDrawElementsIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiModeDrawElementsIBM_Idx),
				 GL_ENTRY_LAST_TS(glMultiModeDrawElementsIBM_Idx));


        if(last_diff > 1000000000){
            printf("glMultiModeDrawElementsIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiModeDrawElementsIBM_Idx),
	             GL_ENTRY_CALL_TIME(glMultiModeDrawElementsIBM_Idx),
	             GL_ENTRY_CALL_TIME(glMultiModeDrawElementsIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiModeDrawElementsIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiModeDrawElementsIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiModeDrawElementsIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiModeDrawElementsIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiModeDrawElementsIBM_Idx) = get_ts();
        }


	

}