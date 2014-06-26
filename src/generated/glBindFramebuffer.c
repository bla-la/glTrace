#include <glTraceCommon.h>
#include <generated.h>

#define glBindFramebuffer_wrp						\
    ((void  (*)(GLenum target,GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glBindFramebuffer_Idx))


GLAPI void  APIENTRY glBindFramebuffer(GLenum target,GLuint framebuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFramebuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFramebuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFramebuffer_wrp(target,framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFramebuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFramebuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFramebuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFramebuffer_Idx),
				 GL_ENTRY_LAST_TS(glBindFramebuffer_Idx));


        if(last_diff > 1000000000){
            printf("glBindFramebuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFramebuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFramebuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFramebuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFramebuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFramebuffer_Idx) = get_ts();
        }


	

}