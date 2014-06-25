#include <glTraceCommon.h>
#include <generated.h>

#define glGenFramebuffersEXT_wrp						\
    ((void  (*)(GLsizei n,GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glGenFramebuffersEXT_Idx))


GLAPI void  APIENTRY glGenFramebuffersEXT(GLsizei n,GLuint *framebuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenFramebuffersEXT_Idx))
	{
            GL_ENTRY_PTR(glGenFramebuffersEXT_Idx) = dlsym(RTLD_NEXT,"glGenFramebuffersEXT");
            if(!GL_ENTRY_PTR(glGenFramebuffersEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenFramebuffersEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFramebuffersEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenFramebuffersEXT_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFramebuffersEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFramebuffersEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFramebuffersEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFramebuffersEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenFramebuffersEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenFramebuffersEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFramebuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffersEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFramebuffersEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFramebuffersEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFramebuffersEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFramebuffersEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFramebuffersEXT_Idx) = get_ts();
        }


	

}