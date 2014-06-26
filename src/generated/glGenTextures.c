#include <glTraceCommon.h>
#include <generated.h>

#define glGenTextures_wrp						\
    ((void  (*)(GLsizei n,GLuint *textures                                        \
    ))GL_ENTRY_PTR(glGenTextures_Idx))


GLAPI void  APIENTRY glGenTextures(GLsizei n,GLuint *textures)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenTextures_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenTextures_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenTextures_wrp(n,textures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenTextures_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenTextures_Idx) ++;

        GL_ENTRY_LAST_TS(glGenTextures_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenTextures_Idx),
				 GL_ENTRY_LAST_TS(glGenTextures_Idx));


        if(last_diff > 1000000000){
            printf("glGenTextures %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenTextures_Idx),
	             GL_ENTRY_CALL_TIME(glGenTextures_Idx),
	             GL_ENTRY_CALL_TIME(glGenTextures_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenTextures_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenTextures_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenTextures_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenTextures_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenTextures_Idx) = get_ts();
        }


	

}