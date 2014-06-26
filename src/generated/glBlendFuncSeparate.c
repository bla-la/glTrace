#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparate_wrp						\
    ((void  (*)(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparate_Idx))


GLAPI void  APIENTRY glBlendFuncSeparate(GLenum sfactorRGB,GLenum dfactorRGB,GLenum sfactorAlpha,GLenum dfactorAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparate_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparate_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparate_wrp(sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparate_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparate_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparate_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparate_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparate_Idx));


        if(last_diff > 1000000000){
            printf("glBlendFuncSeparate %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparate_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparate_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparate_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparate_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparate_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparate_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparate_Idx) = get_ts();
        }


	

}