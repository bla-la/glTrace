#include <glTraceCommon.h>
#include <generated.h>

#define glTextureStorage2DMultisampleEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTextureStorage2DMultisampleEXT_Idx))


GLAPI void  APIENTRY glTextureStorage2DMultisampleEXT(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureStorage2DMultisampleEXT_Idx))
	{
            GL_ENTRY_PTR(glTextureStorage2DMultisampleEXT_Idx) = dlsym(RTLD_NEXT,"glTextureStorage2DMultisampleEXT");
            if(!GL_ENTRY_PTR(glTextureStorage2DMultisampleEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureStorage2DMultisampleEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureStorage2DMultisampleEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureStorage2DMultisampleEXT_wrp(texture,target,samples,internalformat,width,height,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureStorage2DMultisampleEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureStorage2DMultisampleEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureStorage2DMultisampleEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureStorage2DMultisampleEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureStorage2DMultisampleEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTextureStorage2DMultisampleEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureStorage2DMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage2DMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage2DMultisampleEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureStorage2DMultisampleEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureStorage2DMultisampleEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureStorage2DMultisampleEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureStorage2DMultisampleEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureStorage2DMultisampleEXT_Idx) = get_ts();
        }


	

}