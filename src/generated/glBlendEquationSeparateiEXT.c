#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparateiEXT_wrp						\
    ((void  (*)(GLuint buf,GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparateiEXT_Idx))


GLAPI void  APIENTRY glBlendEquationSeparateiEXT(GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparateiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparateiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparateiEXT_wrp(buf,modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparateiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparateiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparateiEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparateiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationSeparateiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparateiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparateiEXT_Idx) = get_ts();
        }


	

}