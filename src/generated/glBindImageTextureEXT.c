#include <glTraceCommon.h>
#include <generated.h>

#define glBindImageTextureEXT_wrp						\
    ((void  (*)(GLuint index,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLint format                                        \
    ))GL_ENTRY_PTR(glBindImageTextureEXT_Idx))


GLAPI void  APIENTRY glBindImageTextureEXT(GLuint index,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLint format)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindImageTextureEXT_Idx))
	{
            GL_ENTRY_PTR(glBindImageTextureEXT_Idx) = dlsym(RTLD_NEXT,"glBindImageTextureEXT");
            if(!GL_ENTRY_PTR(glBindImageTextureEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindImageTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindImageTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindImageTextureEXT_wrp(index,texture,level,layered,layer,access,format);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindImageTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindImageTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindImageTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindImageTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindImageTextureEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindImageTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindImageTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindImageTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindImageTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindImageTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindImageTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindImageTextureEXT_Idx) = get_ts();
        }


	

}