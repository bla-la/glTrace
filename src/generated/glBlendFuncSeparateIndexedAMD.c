#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateIndexedAMD_wrp						\
    ((void  (*)(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateIndexedAMD_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateIndexedAMD(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFuncSeparateIndexedAMD_Idx))
	{
            GL_ENTRY_PTR(glBlendFuncSeparateIndexedAMD_Idx) = dlsym(RTLD_NEXT,"glBlendFuncSeparateIndexedAMD");
            if(!GL_ENTRY_PTR(glBlendFuncSeparateIndexedAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateIndexedAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateIndexedAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateIndexedAMD_wrp(buf,srcRGB,dstRGB,srcAlpha,dstAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateIndexedAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateIndexedAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateIndexedAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateIndexedAMD_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateIndexedAMD_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateIndexedAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateIndexedAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateIndexedAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateIndexedAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateIndexedAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateIndexedAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateIndexedAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateIndexedAMD_Idx) = get_ts();
        }


	

}