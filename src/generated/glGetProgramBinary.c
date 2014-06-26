#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramBinary_wrp						\
    ((void  (*)(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary                                        \
    ))GL_ENTRY_PTR(glGetProgramBinary_Idx))


GLAPI void  APIENTRY glGetProgramBinary(GLuint program,GLsizei bufSize,GLsizei *length,GLenum *binaryFormat,void *binary)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramBinary_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramBinary_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramBinary_wrp(program,bufSize,length,binaryFormat,binary);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramBinary_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramBinary_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramBinary_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramBinary_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramBinary_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramBinary %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramBinary_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramBinary_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramBinary_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramBinary_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramBinary_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramBinary_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramBinary_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramBinary_Idx) = get_ts();
        }


	

}