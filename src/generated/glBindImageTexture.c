#include <glTraceCommon.h>
#include <generated.h>

#define glBindImageTexture_wrp						\
    ((void  (*)(GLuint unit,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format                                        \
    ))GL_ENTRY_PTR(glBindImageTexture_Idx))


GLAPI void  APIENTRY glBindImageTexture(GLuint unit,GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum access,GLenum format)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindImageTexture_Idx))
	{
            GL_ENTRY_PTR(glBindImageTexture_Idx) = dlsym(RTLD_NEXT,"glBindImageTexture");
            if(!GL_ENTRY_PTR(glBindImageTexture_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindImageTexture_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindImageTexture_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindImageTexture_wrp(unit,texture,level,layered,layer,access,format);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindImageTexture_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindImageTexture_Idx) ++;

        GL_ENTRY_LAST_TS(glBindImageTexture_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindImageTexture_Idx),
				 GL_ENTRY_LAST_TS(glBindImageTexture_Idx));
        if(last_diff > 1000000000){
            printf("glBindImageTexture %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindImageTexture_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTexture_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTexture_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindImageTexture_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindImageTexture_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindImageTexture_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindImageTexture_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindImageTexture_Idx) = get_ts();
        }


	

}