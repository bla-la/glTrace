#include <glTraceCommon.h>
#include <generated.h>

#define glIsFramebuffer_wrp						\
    ((GLboolean  (*)(GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glIsFramebuffer_Idx))


GLAPI GLboolean  APIENTRY glIsFramebuffer(GLuint framebuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsFramebuffer_Idx))
	{
            GL_ENTRY_PTR(glIsFramebuffer_Idx) = dlsym(RTLD_NEXT,"glIsFramebuffer");
            if(!GL_ENTRY_PTR(glIsFramebuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsFramebuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsFramebuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsFramebuffer_wrp(framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsFramebuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsFramebuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glIsFramebuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsFramebuffer_Idx),
				 GL_ENTRY_LAST_TS(glIsFramebuffer_Idx));
        if(last_diff > 1000000000){
            printf("glIsFramebuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsFramebuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsFramebuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsFramebuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsFramebuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsFramebuffer_Idx) = get_ts();
        }


	return retval;

}