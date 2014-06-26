#include <glTraceCommon.h>
#include <generated.h>

#define glMultiModeDrawArraysIBM_wrp						\
    ((void  (*)(const GLenum *mode,const GLint *first,const GLsizei *count,GLsizei primcount,GLint modestride                                        \
    ))GL_ENTRY_PTR(glMultiModeDrawArraysIBM_Idx))


GLAPI void  APIENTRY glMultiModeDrawArraysIBM(const GLenum *mode,const GLint *first,const GLsizei *count,GLsizei primcount,GLint modestride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiModeDrawArraysIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiModeDrawArraysIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiModeDrawArraysIBM_wrp(mode,first,count,primcount,modestride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiModeDrawArraysIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiModeDrawArraysIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiModeDrawArraysIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiModeDrawArraysIBM_Idx),
				 GL_ENTRY_LAST_TS(glMultiModeDrawArraysIBM_Idx));


        if(last_diff > 1000000000){
            printf("glMultiModeDrawArraysIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiModeDrawArraysIBM_Idx),
	             GL_ENTRY_CALL_TIME(glMultiModeDrawArraysIBM_Idx),
	             GL_ENTRY_CALL_TIME(glMultiModeDrawArraysIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiModeDrawArraysIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiModeDrawArraysIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiModeDrawArraysIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiModeDrawArraysIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiModeDrawArraysIBM_Idx) = get_ts();
        }


	

}