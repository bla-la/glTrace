#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateiARB_wrp						\
    ((void  (*)(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateiARB_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateiARB(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateiARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateiARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateiARB_wrp(buf,srcRGB,dstRGB,srcAlpha,dstAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateiARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateiARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateiARB_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateiARB_Idx));


        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateiARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateiARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateiARB_Idx) = get_ts();
        }


	

}