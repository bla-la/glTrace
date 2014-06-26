#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture_Idx))


GLAPI void  APIENTRY glFramebufferTexture(GLenum target,GLenum attachment,GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture_wrp(target,attachment,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture_Idx) = get_ts();
        }


	

}