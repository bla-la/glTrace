#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparatei_wrp						\
    ((void  (*)(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparatei_Idx))


GLAPI void  APIENTRY glBlendFuncSeparatei(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparatei_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparatei_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparatei_wrp(buf,srcRGB,dstRGB,srcAlpha,dstAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparatei_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparatei_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparatei_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparatei_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparatei_Idx));


        if(last_diff > 1000000000){
            printf("glBlendFuncSeparatei %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparatei_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparatei_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparatei_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparatei_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparatei_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparatei_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparatei_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparatei_Idx) = get_ts();
        }


	

}