#include <glTraceCommon.h>
#include <generated.h>

#define glTextureStorage3DMultisampleEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations                                        \
    ))GL_ENTRY_PTR(glTextureStorage3DMultisampleEXT_Idx))


GLAPI void  APIENTRY glTextureStorage3DMultisampleEXT(GLuint texture,GLenum target,GLsizei samples,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedsamplelocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureStorage3DMultisampleEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureStorage3DMultisampleEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureStorage3DMultisampleEXT_wrp(texture,target,samples,internalformat,width,height,depth,fixedsamplelocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureStorage3DMultisampleEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureStorage3DMultisampleEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureStorage3DMultisampleEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureStorage3DMultisampleEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureStorage3DMultisampleEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureStorage3DMultisampleEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureStorage3DMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage3DMultisampleEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage3DMultisampleEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureStorage3DMultisampleEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureStorage3DMultisampleEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureStorage3DMultisampleEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureStorage3DMultisampleEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureStorage3DMultisampleEXT_Idx) = get_ts();
        }


	

}