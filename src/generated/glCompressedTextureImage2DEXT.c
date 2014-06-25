#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTextureImage2DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedTextureImage2DEXT_Idx))


GLAPI void  APIENTRY glCompressedTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTextureImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glCompressedTextureImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glCompressedTextureImage2DEXT");
            if(!GL_ENTRY_PTR(glCompressedTextureImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTextureImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTextureImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTextureImage2DEXT_wrp(texture,target,level,internalformat,width,height,border,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTextureImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTextureImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTextureImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTextureImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTextureImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTextureImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTextureImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTextureImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTextureImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTextureImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTextureImage2DEXT_Idx) = get_ts();
        }


	

}