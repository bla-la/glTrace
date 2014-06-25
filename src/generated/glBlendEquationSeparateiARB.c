#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparateiARB_wrp						\
    ((void  (*)(GLuint buf,GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparateiARB_Idx))


GLAPI void  APIENTRY glBlendEquationSeparateiARB(GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquationSeparateiARB_Idx))
	{
            GL_ENTRY_PTR(glBlendEquationSeparateiARB_Idx) = dlsym(RTLD_NEXT,"glBlendEquationSeparateiARB");
            if(!GL_ENTRY_PTR(glBlendEquationSeparateiARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparateiARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparateiARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparateiARB_wrp(buf,modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparateiARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparateiARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparateiARB_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparateiARB_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquationSeparateiARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparateiARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateiARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparateiARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparateiARB_Idx) = get_ts();
        }


	

}