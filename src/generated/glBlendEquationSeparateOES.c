#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparateOES_wrp						\
    ((void  (*)(GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparateOES_Idx))


GLAPI void  APIENTRY glBlendEquationSeparateOES(GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquationSeparateOES_Idx))
	{
            GL_ENTRY_PTR(glBlendEquationSeparateOES_Idx) = dlsym(RTLD_NEXT,"glBlendEquationSeparateOES");
            if(!GL_ENTRY_PTR(glBlendEquationSeparateOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparateOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparateOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparateOES_wrp(modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparateOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparateOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparateOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparateOES_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparateOES_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquationSeparateOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparateOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparateOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparateOES_Idx) = get_ts();
        }


	

}