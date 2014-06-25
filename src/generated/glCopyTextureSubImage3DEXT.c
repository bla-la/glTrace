#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTextureSubImage3DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyTextureSubImage3DEXT_Idx))


GLAPI void  APIENTRY glCopyTextureSubImage3DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyTextureSubImage3DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyTextureSubImage3DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyTextureSubImage3DEXT");
            if(!GL_ENTRY_PTR(glCopyTextureSubImage3DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyTextureSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTextureSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTextureSubImage3DEXT_wrp(texture,target,level,xoffset,yoffset,zoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTextureSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTextureSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTextureSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTextureSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTextureSubImage3DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyTextureSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTextureSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTextureSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTextureSubImage3DEXT_Idx) = get_ts();
        }


	

}