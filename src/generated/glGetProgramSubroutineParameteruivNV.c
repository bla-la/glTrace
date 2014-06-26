#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramSubroutineParameteruivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint *param                                        \
    ))GL_ENTRY_PTR(glGetProgramSubroutineParameteruivNV_Idx))


GLAPI void  APIENTRY glGetProgramSubroutineParameteruivNV(GLenum target,GLuint index,GLuint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramSubroutineParameteruivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramSubroutineParameteruivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramSubroutineParameteruivNV_wrp(target,index,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramSubroutineParameteruivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramSubroutineParameteruivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramSubroutineParameteruivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramSubroutineParameteruivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramSubroutineParameteruivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramSubroutineParameteruivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramSubroutineParameteruivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramSubroutineParameteruivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramSubroutineParameteruivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramSubroutineParameteruivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramSubroutineParameteruivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramSubroutineParameteruivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramSubroutineParameteruivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramSubroutineParameteruivNV_Idx) = get_ts();
        }


	

}