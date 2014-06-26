#include <glTraceCommon.h>
#include <generated.h>

#define glDetachShader_wrp						\
    ((void  (*)(GLuint program,GLuint shader                                        \
    ))GL_ENTRY_PTR(glDetachShader_Idx))


GLAPI void  APIENTRY glDetachShader(GLuint program,GLuint shader)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDetachShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glDetachShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDetachShader_wrp(program,shader);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDetachShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDetachShader_Idx) ++;

        GL_ENTRY_LAST_TS(glDetachShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDetachShader_Idx),
				 GL_ENTRY_LAST_TS(glDetachShader_Idx));


        if(last_diff > 1000000000){
            printf("glDetachShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDetachShader_Idx),
	             GL_ENTRY_CALL_TIME(glDetachShader_Idx),
	             GL_ENTRY_CALL_TIME(glDetachShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glDetachShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDetachShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDetachShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDetachShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDetachShader_Idx) = get_ts();
        }


	

}