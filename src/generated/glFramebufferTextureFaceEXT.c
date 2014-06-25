#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureFaceEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureFaceEXT_Idx))


GLAPI void  APIENTRY glFramebufferTextureFaceEXT(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferTextureFaceEXT_Idx))
	{
            GL_ENTRY_PTR(glFramebufferTextureFaceEXT_Idx) = dlsym(RTLD_NEXT,"glFramebufferTextureFaceEXT");
            if(!GL_ENTRY_PTR(glFramebufferTextureFaceEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferTextureFaceEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureFaceEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureFaceEXT_wrp(target,attachment,texture,level,face);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureFaceEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureFaceEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureFaceEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureFaceEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferTextureFaceEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureFaceEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureFaceEXT_Idx) = get_ts();
        }


	

}