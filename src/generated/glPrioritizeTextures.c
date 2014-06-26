#include <glTraceCommon.h>
#include <generated.h>

#define glPrioritizeTextures_wrp						\
    ((void  (*)(GLsizei n,const GLuint *textures,const GLfloat *priorities                                        \
    ))GL_ENTRY_PTR(glPrioritizeTextures_Idx))


GLAPI void  APIENTRY glPrioritizeTextures(GLsizei n,const GLuint *textures,const GLfloat *priorities)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPrioritizeTextures_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrioritizeTextures_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrioritizeTextures_wrp(n,textures,priorities);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrioritizeTextures_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrioritizeTextures_Idx) ++;

        GL_ENTRY_LAST_TS(glPrioritizeTextures_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrioritizeTextures_Idx),
				 GL_ENTRY_LAST_TS(glPrioritizeTextures_Idx));


        if(last_diff > 1000000000){
            printf("glPrioritizeTextures %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrioritizeTextures_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTextures_Idx),
	             GL_ENTRY_CALL_TIME(glPrioritizeTextures_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrioritizeTextures_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrioritizeTextures_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrioritizeTextures_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrioritizeTextures_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrioritizeTextures_Idx) = get_ts();
        }


	

}