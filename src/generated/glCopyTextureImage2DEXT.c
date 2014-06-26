#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTextureImage2DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border                                        \
    ))GL_ENTRY_PTR(glCopyTextureImage2DEXT_Idx))


GLAPI void  APIENTRY glCopyTextureImage2DEXT(GLuint texture,GLenum target,GLint level,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height,GLint border)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTextureImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTextureImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTextureImage2DEXT_wrp(texture,target,level,internalformat,x,y,width,height,border);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTextureImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTextureImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTextureImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTextureImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTextureImage2DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTextureImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTextureImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTextureImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTextureImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTextureImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTextureImage2DEXT_Idx) = get_ts();
        }


	

}