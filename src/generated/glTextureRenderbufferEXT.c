#include <glTraceCommon.h>
#include <generated.h>

#define glTextureRenderbufferEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glTextureRenderbufferEXT_Idx))


GLAPI void  APIENTRY glTextureRenderbufferEXT(GLuint texture,GLenum target,GLuint renderbuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureRenderbufferEXT_wrp(texture,target,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureRenderbufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureRenderbufferEXT_Idx) = get_ts();
        }


	

}