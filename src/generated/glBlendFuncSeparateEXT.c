#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateEXT_wrp						\
    ((void  (*)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateEXT_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateEXT(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFuncSeparateEXT_Idx))
	{
            GL_ENTRY_PTR(glBlendFuncSeparateEXT_Idx) = dlsym(RTLD_NEXT,"glBlendFuncSeparateEXT");
            if(!GL_ENTRY_PTR(glBlendFuncSeparateEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateEXT_wrp(sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateEXT_Idx) = get_ts();
        }


	

}