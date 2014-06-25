#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureImageEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum format,GLenum type,void *pixels                                        \
    ))GL_ENTRY_PTR(glGetTextureImageEXT_Idx))


GLAPI void  APIENTRY glGetTextureImageEXT(GLuint texture,GLenum target,GLint level,GLenum format,GLenum type,void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureImageEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureImageEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureImageEXT");
            if(!GL_ENTRY_PTR(glGetTextureImageEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureImageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureImageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureImageEXT_wrp(texture,target,level,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureImageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureImageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureImageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureImageEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureImageEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureImageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureImageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureImageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureImageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureImageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureImageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureImageEXT_Idx) = get_ts();
        }


	

}