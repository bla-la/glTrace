#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTextureImage1DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTextureImage1DEXT_Idx))


GLAPI void  APIENTRY glCopyTextureImage1DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLint border)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyTextureImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyTextureImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyTextureImage1DEXT");
            if(!GL_ENTRY_PTR(glCopyTextureImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyTextureImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTextureImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTextureImage1DEXT_wrp(texture,target,level,internalformat,x,y,width,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTextureImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTextureImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTextureImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTextureImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTextureImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyTextureImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTextureImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTextureImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTextureImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTextureImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTextureImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTextureImage1DEXT_Idx) = get_ts();
        }


	

}