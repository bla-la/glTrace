#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramBinaryOES_wrp						\
    ((void  (*)(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary                                        \
    ))GL_ENTRY_PTR(glGetProgramBinaryOES_Idx))


GLAPI void  APIENTRY glGetProgramBinaryOES(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramBinaryOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramBinaryOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramBinaryOES_wrp(program,bufSize,length,binaryFormat,binary);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramBinaryOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramBinaryOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramBinaryOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramBinaryOES_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramBinaryOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramBinaryOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramBinaryOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramBinaryOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramBinaryOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramBinaryOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramBinaryOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramBinaryOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramBinaryOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramBinaryOES_Idx) = get_ts();
        }


	

}