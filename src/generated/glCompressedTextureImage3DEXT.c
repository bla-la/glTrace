#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTextureImage3DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedTextureImage3DEXT_Idx))


GLAPI void  APIENTRY glCompressedTextureImage3DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedTextureImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTextureImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTextureImage3DEXT_wrp(texture,target,level,internalformat,width,height,depth,border,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTextureImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTextureImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTextureImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTextureImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTextureImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedTextureImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTextureImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTextureImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTextureImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTextureImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTextureImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTextureImage3DEXT_Idx) = get_ts();
        }


	

}