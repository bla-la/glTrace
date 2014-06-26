#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparatei_wrp						\
    ((void  (*)(GLuint buf,GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparatei_Idx))


GLAPI void  APIENTRY glBlendEquationSeparatei(GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparatei_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparatei_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparatei_wrp(buf,modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparatei_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparatei_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparatei_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparatei_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparatei_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationSeparatei %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparatei_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparatei_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparatei_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparatei_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparatei_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparatei_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparatei_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparatei_Idx) = get_ts();
        }


	

}