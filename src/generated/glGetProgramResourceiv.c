#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramResourceiv_wrp						\
    ((void  (*)(GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramResourceiv_Idx))


GLAPI void  APIENTRY glGetProgramResourceiv(GLuint program,GLenum programInterface,GLuint index,GLsizei propCount,const GLenum *props,GLsizei bufSize,GLsizei *length,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramResourceiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramResourceiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramResourceiv_wrp(program,programInterface,index,propCount,props,bufSize,length,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramResourceiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramResourceiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramResourceiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramResourceiv_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramResourceiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramResourceiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramResourceiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramResourceiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramResourceiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramResourceiv_Idx) = get_ts();
        }


	

}