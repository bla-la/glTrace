#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniform_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetActiveUniform_Idx))


GLAPI void  APIENTRY glGetActiveUniform(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetActiveUniform_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniform_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniform_wrp(program,index,bufSize,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniform_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniform_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniform_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniform_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniform_Idx));


        if(last_diff > 1000000000){
            printf("glGetActiveUniform %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniform_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniform_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniform_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniform_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniform_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniform_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniform_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniform_Idx) = get_ts();
        }


	

}