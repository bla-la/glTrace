#include <glTraceCommon.h>
#include <generated.h>

#define glLinkProgram_wrp						\
    ((void  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glLinkProgram_Idx))


GLAPI void  APIENTRY glLinkProgram(GLuint program)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLinkProgram_Idx))
    	{
            GL_ENTRY_PREV_TS(glLinkProgram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLinkProgram_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLinkProgram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLinkProgram_Idx) ++;

        GL_ENTRY_LAST_TS(glLinkProgram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLinkProgram_Idx),
				 GL_ENTRY_LAST_TS(glLinkProgram_Idx));


        if(last_diff > 1000000000){
            printf("glLinkProgram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLinkProgram_Idx),
	             GL_ENTRY_CALL_TIME(glLinkProgram_Idx),
	             GL_ENTRY_CALL_TIME(glLinkProgram_Idx) /
	             GL_ENTRY_CALL_COUNT(glLinkProgram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLinkProgram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLinkProgram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLinkProgram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLinkProgram_Idx) = get_ts();
        }


	

}