#include <glTraceCommon.h>
#include <generated.h>

#define glBindParameterEXT_wrp						\
    ((GLuint  (*)(GLenum value                                        \
    ))GL_ENTRY_PTR(glBindParameterEXT_Idx))


GLAPI GLuint  APIENTRY glBindParameterEXT(GLenum value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindParameterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindParameterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glBindParameterEXT_wrp(value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindParameterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindParameterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindParameterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindParameterEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindParameterEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBindParameterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindParameterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindParameterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindParameterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindParameterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindParameterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindParameterEXT_Idx) = get_ts();
        }


	return retval;

}