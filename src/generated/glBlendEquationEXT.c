#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationEXT_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquationEXT_Idx))


GLAPI void  APIENTRY glBlendEquationEXT(GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationEXT_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationEXT_Idx) = get_ts();
        }


	

}