#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramResourceName_wrp						\
    ((void  (*)(GLuint program,GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetProgramResourceName_Idx))


GLAPI void  APIENTRY glGetProgramResourceName(GLuint program,GLenum programInterface,GLuint index,GLsizei bufSize,GLsizei *length,GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramResourceName_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramResourceName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramResourceName_wrp(program,programInterface,index,bufSize,length,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramResourceName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramResourceName_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramResourceName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramResourceName_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramResourceName_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramResourceName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceName_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceName_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceName_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramResourceName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramResourceName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramResourceName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramResourceName_Idx) = get_ts();
        }


	

}