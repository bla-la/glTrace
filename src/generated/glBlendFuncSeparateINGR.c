#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateINGR_wrp						\
    ((void  (*)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateINGR_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateINGR(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateINGR_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateINGR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateINGR_wrp(sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateINGR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateINGR_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateINGR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateINGR_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateINGR_Idx));


        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateINGR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateINGR_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateINGR_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateINGR_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateINGR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateINGR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateINGR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateINGR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateINGR_Idx) = get_ts();
        }


	

}