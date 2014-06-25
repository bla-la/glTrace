#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparate_wrp						\
    ((void  (*)(GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparate_Idx))


GLAPI void  APIENTRY glBlendEquationSeparate(GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquationSeparate_Idx))
	{
            GL_ENTRY_PTR(glBlendEquationSeparate_Idx) = dlsym(RTLD_NEXT,"glBlendEquationSeparate");
            if(!GL_ENTRY_PTR(glBlendEquationSeparate_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparate_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparate_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparate_wrp(modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparate_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparate_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparate_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparate_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparate_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquationSeparate %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparate_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparate_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparate_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparate_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparate_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparate_Idx) = get_ts();
        }


	

}