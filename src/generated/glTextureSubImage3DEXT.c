#include <glTraceCommon.h>
#include <generated.h>

#define glTextureSubImage3DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTextureSubImage3DEXT_Idx))


GLAPI void  APIENTRY glTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureSubImage3DEXT_Idx))
	{
            GL_ENTRY_PTR(glTextureSubImage3DEXT_Idx) = dlsym(RTLD_NEXT,"glTextureSubImage3DEXT");
            if(!GL_ENTRY_PTR(glTextureSubImage3DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureSubImage3DEXT_wrp(texture,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureSubImage3DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTextureSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureSubImage3DEXT_Idx) = get_ts();
        }


	

}