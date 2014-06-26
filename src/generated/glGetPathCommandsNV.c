#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathCommandsNV_wrp						\
    ((void  (*)(GLuint path,GLubyte *commands                                        \
    ))GL_ENTRY_PTR(glGetPathCommandsNV_Idx))


GLAPI void  APIENTRY glGetPathCommandsNV(GLuint path,GLubyte *commands)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPathCommandsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathCommandsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathCommandsNV_wrp(path,commands);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathCommandsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathCommandsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathCommandsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathCommandsNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathCommandsNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetPathCommandsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathCommandsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathCommandsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathCommandsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathCommandsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathCommandsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathCommandsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathCommandsNV_Idx) = get_ts();
        }


	

}