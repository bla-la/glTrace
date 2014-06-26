#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTextureSubImage1DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedTextureSubImage1DEXT_Idx))


GLAPI void  APIENTRY glCompressedTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedTextureSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTextureSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTextureSubImage1DEXT_wrp(texture,target,level,xoffset,width,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTextureSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTextureSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTextureSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTextureSubImage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedTextureSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTextureSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTextureSubImage1DEXT_Idx) = get_ts();
        }


	

}