#include <glTraceCommon.h>
#include <generated.h>

#define glActiveProgramEXT_wrp						\
    ((void  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glActiveProgramEXT_Idx))


GLAPI void  APIENTRY glActiveProgramEXT(GLuint program)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glActiveProgramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveProgramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveProgramEXT_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveProgramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveProgramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveProgramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveProgramEXT_Idx),
				 GL_ENTRY_LAST_TS(glActiveProgramEXT_Idx));


        if(last_diff > 1000000000){
            printf("glActiveProgramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveProgramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveProgramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveProgramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveProgramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveProgramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveProgramEXT_Idx) = get_ts();
        }


	

}