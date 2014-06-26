#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerOutputNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum abOutput,GLenum cdOutput,GLenum sumOutput,GLenum scale,GLenum bias,GLboolean abDotProduct,GLboolean cdDotProduct,GLboolean muxSum                                        \
    ))GL_ENTRY_PTR(glCombinerOutputNV_Idx))


GLAPI void  APIENTRY glCombinerOutputNV(GLenum stage,GLenum portion,GLenum abOutput,GLenum cdOutput,GLenum sumOutput,GLenum scale,GLenum bias,GLboolean abDotProduct,GLboolean cdDotProduct,GLboolean muxSum)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCombinerOutputNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerOutputNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerOutputNV_wrp(stage,portion,abOutput,cdOutput,sumOutput,scale,bias,abDotProduct,cdDotProduct,muxSum);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerOutputNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerOutputNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerOutputNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerOutputNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerOutputNV_Idx));


        if(last_diff > 1000000000){
            printf("glCombinerOutputNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerOutputNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerOutputNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerOutputNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerOutputNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerOutputNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerOutputNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerOutputNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerOutputNV_Idx) = get_ts();
        }


	

}