#include <glTraceCommon.h>
#include <generated.h>

#define glTextureImage2DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTextureImage2DEXT_Idx))


GLAPI void  APIENTRY glTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glTextureImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glTextureImage2DEXT");
            if(!GL_ENTRY_PTR(glTextureImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureImage2DEXT_wrp(texture,target,level,internalformat,width,height,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTextureImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureImage2DEXT_Idx) = get_ts();
        }


	

}