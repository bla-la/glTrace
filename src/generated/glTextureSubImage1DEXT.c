#include <glTraceCommon.h>
#include <generated.h>

#define glTextureSubImage1DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTextureSubImage1DEXT_Idx))


GLAPI void  APIENTRY glTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureSubImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glTextureSubImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glTextureSubImage1DEXT");
            if(!GL_ENTRY_PTR(glTextureSubImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureSubImage1DEXT_wrp(texture,target,level,xoffset,width,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureSubImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTextureSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureSubImage1DEXT_Idx) = get_ts();
        }


	

}