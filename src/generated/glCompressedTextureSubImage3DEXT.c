#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTextureSubImage3DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedTextureSubImage3DEXT_Idx))


GLAPI void  APIENTRY glCompressedTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedTextureSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTextureSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTextureSubImage3DEXT_wrp(texture,target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTextureSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTextureSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTextureSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTextureSubImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedTextureSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTextureSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTextureSubImage3DEXT_Idx) = get_ts();
        }


	

}