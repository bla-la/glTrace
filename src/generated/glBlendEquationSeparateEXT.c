#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparateEXT_wrp						\
    ((void  (*)(GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparateEXT_Idx))


GLAPI void  APIENTRY glBlendEquationSeparateEXT(GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparateEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparateEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparateEXT_wrp(modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparateEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparateEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparateEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparateEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparateEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationSeparateEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparateEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparateEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparateEXT_Idx) = get_ts();
        }


	

}