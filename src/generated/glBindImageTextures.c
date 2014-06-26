#include <glTraceCommon.h>
#include <generated.h>

#define glBindImageTextures_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLuint *textures                                        \
    ))GL_ENTRY_PTR(glBindImageTextures_Idx))


GLAPI void  APIENTRY glBindImageTextures(GLuint first,GLsizei count,const GLuint *textures)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindImageTextures_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindImageTextures_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindImageTextures_wrp(first,count,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindImageTextures_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindImageTextures_Idx) ++;

        GL_ENTRY_LAST_TS(glBindImageTextures_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindImageTextures_Idx),
				 GL_ENTRY_LAST_TS(glBindImageTextures_Idx));


        if(last_diff > 1000000000){
            printf("glBindImageTextures %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindImageTextures_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTextures_Idx),
	             GL_ENTRY_CALL_TIME(glBindImageTextures_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindImageTextures_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindImageTextures_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindImageTextures_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindImageTextures_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindImageTextures_Idx) = get_ts();
        }


	

}