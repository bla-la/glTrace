#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTextureSubImage2DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedTextureSubImage2DEXT_Idx))


GLAPI void  APIENTRY glCompressedTextureSubImage2DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTextureSubImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glCompressedTextureSubImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glCompressedTextureSubImage2DEXT");
            if(!GL_ENTRY_PTR(glCompressedTextureSubImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTextureSubImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTextureSubImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTextureSubImage2DEXT_wrp(texture,target,level,xoffset,yoffset,width,height,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTextureSubImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTextureSubImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTextureSubImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTextureSubImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTextureSubImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTextureSubImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTextureSubImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTextureSubImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTextureSubImage2DEXT_Idx) = get_ts();
        }


	

}