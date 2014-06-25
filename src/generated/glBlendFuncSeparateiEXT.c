#include <glTraceCommon.h>
#include <generated.h>

#define glBlendFuncSeparateiEXT_wrp						\
    ((void  (*)(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha                                        \
    ))GL_ENTRY_PTR(glBlendFuncSeparateiEXT_Idx))


GLAPI void  APIENTRY glBlendFuncSeparateiEXT(GLuint buf,GLenum srcRGB,GLenum dstRGB,GLenum srcAlpha,GLenum dstAlpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlendFuncSeparateiEXT_Idx))
	{
            GL_ENTRY_PTR(glBlendFuncSeparateiEXT_Idx) = dlsym(RTLD_NEXT,"glBlendFuncSeparateiEXT");
            if(!GL_ENTRY_PTR(glBlendFuncSeparateiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlendFuncSeparateiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendFuncSeparateiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendFuncSeparateiEXT_wrp(buf,srcRGB,dstRGB,srcAlpha,dstAlpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendFuncSeparateiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendFuncSeparateiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendFuncSeparateiEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlendFuncSeparateiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBlendFuncSeparateiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendFuncSeparateiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendFuncSeparateiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendFuncSeparateiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendFuncSeparateiEXT_Idx) = get_ts();
        }


	

}