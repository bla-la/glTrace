#include <glTraceCommon.h>
#include <generated.h>

#define glBindTextures_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLuint *textures                                        \
    ))GL_ENTRY_PTR(glBindTextures_Idx))


GLAPI void  APIENTRY glBindTextures(GLuint first,GLsizei count,const GLuint *textures)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindTextures_Idx))
	{
            GL_ENTRY_PTR(glBindTextures_Idx) = dlsym(RTLD_NEXT,"glBindTextures");
            if(!GL_ENTRY_PTR(glBindTextures_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindTextures_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTextures_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindTextures_wrp(first,count,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTextures_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTextures_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTextures_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTextures_Idx),
				 GL_ENTRY_LAST_TS(glBindTextures_Idx));
        if(last_diff > 1000000000){
            printf("glBindTextures %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTextures_Idx),
	             GL_ENTRY_CALL_TIME(glBindTextures_Idx),
	             GL_ENTRY_CALL_TIME(glBindTextures_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTextures_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTextures_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTextures_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTextures_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTextures_Idx) = get_ts();
        }


	

}