#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetProgramBinarySourceQCOM_wrp						\
    ((void  (*)(GLuint program,GLenum shadertype,GLchar *source,GLint *length                                        \
    ))GL_ENTRY_PTR(glExtGetProgramBinarySourceQCOM_Idx))


GLAPI void  APIENTRY glExtGetProgramBinarySourceQCOM(GLuint program,GLenum shadertype,GLchar *source,GLint *length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtGetProgramBinarySourceQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetProgramBinarySourceQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetProgramBinarySourceQCOM_wrp(program,shadertype,source,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetProgramBinarySourceQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetProgramBinarySourceQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetProgramBinarySourceQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetProgramBinarySourceQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetProgramBinarySourceQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtGetProgramBinarySourceQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetProgramBinarySourceQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetProgramBinarySourceQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetProgramBinarySourceQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetProgramBinarySourceQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetProgramBinarySourceQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetProgramBinarySourceQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetProgramBinarySourceQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetProgramBinarySourceQCOM_Idx) = get_ts();
        }


	

}