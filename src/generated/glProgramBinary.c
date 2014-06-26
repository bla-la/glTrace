#include <glTraceCommon.h>
#include <generated.h>

#define glProgramBinary_wrp						\
    ((void  (*)(GLuint program,GLenum binaryFormat,const void *binary,GLsizei length                                        \
    ))GL_ENTRY_PTR(glProgramBinary_Idx))


GLAPI void  APIENTRY glProgramBinary(GLuint program,GLenum binaryFormat,const void *binary,GLsizei length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramBinary_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramBinary_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramBinary_wrp(program,binaryFormat,binary,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramBinary_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramBinary_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramBinary_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramBinary_Idx),
				 GL_ENTRY_LAST_TS(glProgramBinary_Idx));


        if(last_diff > 1000000000){
            printf("glProgramBinary %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramBinary_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBinary_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBinary_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramBinary_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramBinary_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramBinary_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramBinary_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramBinary_Idx) = get_ts();
        }


	

}