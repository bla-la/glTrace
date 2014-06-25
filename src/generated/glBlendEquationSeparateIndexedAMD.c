#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationSeparateIndexedAMD_wrp						\
    ((void  (*)(GLuint buf,GLenum modeRGB,GLenum modeAlpha                                        \
    ))GL_ENTRY_PTR(glBlendEquationSeparateIndexedAMD_Idx))


GLAPI void  APIENTRY glBlendEquationSeparateIndexedAMD(GLuint buf,GLenum modeRGB,GLenum modeAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendEquationSeparateIndexedAMD_Idx))
	{
            GL_ENTRY_PTR(glBlendEquationSeparateIndexedAMD_Idx) = dlsym(RTLD_NEXT,"glBlendEquationSeparateIndexedAMD");
            if(!GL_ENTRY_PTR(glBlendEquationSeparateIndexedAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendEquationSeparateIndexedAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationSeparateIndexedAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationSeparateIndexedAMD_wrp(buf,modeRGB,modeAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationSeparateIndexedAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationSeparateIndexedAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationSeparateIndexedAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationSeparateIndexedAMD_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationSeparateIndexedAMD_Idx));
        if(last_diff > 1000000000){
            printf("glBlendEquationSeparateIndexedAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationSeparateIndexedAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateIndexedAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationSeparateIndexedAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationSeparateIndexedAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationSeparateIndexedAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationSeparateIndexedAMD_Idx) = get_ts();
        }


	

}