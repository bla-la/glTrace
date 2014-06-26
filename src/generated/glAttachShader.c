#include <glTraceCommon.h>
#include <generated.h>

#define glAttachShader_wrp						\
    ((void  (*)(GLuint program,GLuint shader                                        \
    ))GL_ENTRY_PTR(glAttachShader_Idx))


GLAPI void  APIENTRY glAttachShader(GLuint program,GLuint shader)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAttachShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glAttachShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAttachShader_wrp(program,shader);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAttachShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAttachShader_Idx) ++;

        GL_ENTRY_LAST_TS(glAttachShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAttachShader_Idx),
				 GL_ENTRY_LAST_TS(glAttachShader_Idx));


        if(last_diff > 1000000000){
            printf("glAttachShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAttachShader_Idx),
	             GL_ENTRY_CALL_TIME(glAttachShader_Idx),
	             GL_ENTRY_CALL_TIME(glAttachShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glAttachShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAttachShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAttachShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAttachShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAttachShader_Idx) = get_ts();
        }


	

}