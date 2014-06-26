#include <glTraceCommon.h>
#include <generated.h>

#define glTextureViewEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers                                        \
    ))GL_ENTRY_PTR(glTextureViewEXT_Idx))


GLAPI void  APIENTRY glTextureViewEXT(GLuint texture,GLenum target,GLuint origtexture,GLenum internalformat,GLuint minlevel,GLuint numlevels,GLuint minlayer,GLuint numlayers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureViewEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureViewEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureViewEXT_wrp(texture,target,origtexture,internalformat,minlevel,numlevels,minlayer,numlayers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureViewEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureViewEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureViewEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureViewEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureViewEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureViewEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureViewEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureViewEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureViewEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureViewEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureViewEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureViewEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureViewEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureViewEXT_Idx) = get_ts();
        }


	

}