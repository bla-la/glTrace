#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteShader_wrp						\
    ((void  (*)(GLuint shader                                        \
    ))GL_ENTRY_PTR(glDeleteShader_Idx))


GLAPI void  APIENTRY glDeleteShader(GLuint shader)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteShader_wrp(shader);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteShader_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteShader_Idx),
				 GL_ENTRY_LAST_TS(glDeleteShader_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteShader_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteShader_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteShader_Idx) = get_ts();
        }


	

}