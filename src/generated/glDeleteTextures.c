#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteTextures_wrp						\
    ((void  (*)(GLsizei n,const GLuint *textures                                        \
    ))GL_ENTRY_PTR(glDeleteTextures_Idx))


GLAPI void  APIENTRY glDeleteTextures(GLsizei n,const GLuint *textures)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteTextures_Idx))
	{
            GL_ENTRY_PTR(glDeleteTextures_Idx) = dlsym(RTLD_NEXT,"glDeleteTextures");
            if(!GL_ENTRY_PTR(glDeleteTextures_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteTextures_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteTextures_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteTextures_wrp(n,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteTextures_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteTextures_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteTextures_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteTextures_Idx),
				 GL_ENTRY_LAST_TS(glDeleteTextures_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteTextures %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteTextures_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTextures_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTextures_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteTextures_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteTextures_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteTextures_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteTextures_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteTextures_Idx) = get_ts();
        }


	

}