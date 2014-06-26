#include <glTraceCommon.h>
#include <generated.h>

#define glTextureImage3DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTextureImage3DEXT_Idx))


GLAPI void  APIENTRY glTextureImage3DEXT(GLuint texture,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureImage3DEXT_wrp(texture,target,level,internalformat,width,height,depth,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureImage3DEXT_Idx) = get_ts();
        }


	

}