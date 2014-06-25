#include <glTraceCommon.h>
#include <generated.h>

#define glTextureView_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers                                        \
    ))GL_ENTRY_PTR(glTextureView_Idx))


GLAPI void  APIENTRY glTextureView(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureView_Idx))
	{
            GL_ENTRY_PTR(glTextureView_Idx) = dlsym(RTLD_NEXT,"glTextureView");
            if(!GL_ENTRY_PTR(glTextureView_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureView_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureView_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureView_wrp(texture,target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureView_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureView_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureView_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureView_Idx),
				 GL_ENTRY_LAST_TS(glTextureView_Idx));
        if(last_diff > 1000000000){
            printf("glTextureView %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureView_Idx),
	             GL_ENTRY_CALL_TIME(glTextureView_Idx),
	             GL_ENTRY_CALL_TIME(glTextureView_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureView_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureView_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureView_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureView_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureView_Idx) = get_ts();
        }


	

}