#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameteriARB_wrp						\
    ((void  (*)(GLuint program,GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glProgramParameteriARB_Idx))


GLAPI void  APIENTRY glProgramParameteriARB(GLuint program,GLenum pname,GLint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramParameteriARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameteriARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameteriARB_wrp(program,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameteriARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameteriARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameteriARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameteriARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameteriARB_Idx));


        if(last_diff > 1000000000){
            printf("glProgramParameteriARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameteriARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteriARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteriARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameteriARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameteriARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameteriARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameteriARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameteriARB_Idx) = get_ts();
        }


	

}