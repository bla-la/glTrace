#include <glTraceCommon.h>
#include <generated.h>

#define glUniformHandleui64ARB_wrp						\
    ((void  (*)(GLint location,GLuint64 value                                        \
    ))GL_ENTRY_PTR(glUniformHandleui64ARB_Idx))


GLAPI void  APIENTRY glUniformHandleui64ARB(GLint location,GLuint64 value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniformHandleui64ARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformHandleui64ARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformHandleui64ARB_wrp(location,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformHandleui64ARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformHandleui64ARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformHandleui64ARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformHandleui64ARB_Idx),
				 GL_ENTRY_LAST_TS(glUniformHandleui64ARB_Idx));


        if(last_diff > 1000000000){
            printf("glUniformHandleui64ARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformHandleui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformHandleui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformHandleui64ARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformHandleui64ARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformHandleui64ARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformHandleui64ARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformHandleui64ARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformHandleui64ARB_Idx) = get_ts();
        }


	

}