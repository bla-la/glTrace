#include <glTraceCommon.h>
#include <generated.h>

#define glBindTexGenParameterEXT_wrp						\
    ((GLuint  (*)(GLenum unit,GLenum coord,GLenum value                                        \
    ))GL_ENTRY_PTR(glBindTexGenParameterEXT_Idx))


GLAPI GLuint  APIENTRY glBindTexGenParameterEXT(GLenum unit,GLenum coord,GLenum value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindTexGenParameterEXT_Idx))
	{
            GL_ENTRY_PTR(glBindTexGenParameterEXT_Idx) = dlsym(RTLD_NEXT,"glBindTexGenParameterEXT");
            if(!GL_ENTRY_PTR(glBindTexGenParameterEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindTexGenParameterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTexGenParameterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glBindTexGenParameterEXT_wrp(unit,coord,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTexGenParameterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTexGenParameterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTexGenParameterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTexGenParameterEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindTexGenParameterEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindTexGenParameterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTexGenParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindTexGenParameterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindTexGenParameterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTexGenParameterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTexGenParameterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTexGenParameterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTexGenParameterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTexGenParameterEXT_Idx) = get_ts();
        }


	return retval;

}