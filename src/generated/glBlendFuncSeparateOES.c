#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateOES_wrp						\
    ((void  (*)(GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateOES_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateOES(GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFuncSeparateOES_Idx))
	{
            GL_ENTRY_PTR(glBlendFuncSeparateOES_Idx) = dlsym(RTLD_NEXT,"glBlendFuncSeparateOES");
            if(!GL_ENTRY_PTR(glBlendFuncSeparateOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateOES_wrp(srcRGB,dstRGB,srcAlpha,dstAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateOES_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateOES_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateOES_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateOES_Idx) = get_ts();
        }


	

}