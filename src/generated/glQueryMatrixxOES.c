#include <glTraceCommon.h>
#include <generated.h>

#define glQueryMatrixxOES_wrp						\
    ((GLbitfield  (*)(GLfixed *mantissa,GLint *exponent                                        \
    ))GL_ENTRY_PTR(glQueryMatrixxOES_Idx))


GLAPI GLbitfield  APIENTRY glQueryMatrixxOES(GLfixed *mantissa,GLint *exponent)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glQueryMatrixxOES_Idx))
	{
            GL_ENTRY_PTR(glQueryMatrixxOES_Idx) = dlsym(RTLD_NEXT,"glQueryMatrixxOES");
            if(!GL_ENTRY_PTR(glQueryMatrixxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glQueryMatrixxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glQueryMatrixxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLbitfield  retval = glQueryMatrixxOES_wrp(mantissa,exponent);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glQueryMatrixxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glQueryMatrixxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glQueryMatrixxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glQueryMatrixxOES_Idx),
				 GL_ENTRY_LAST_TS(glQueryMatrixxOES_Idx));
        if(last_diff > 1000000000){
            printf("glQueryMatrixxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glQueryMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glQueryMatrixxOES_Idx),
	             GL_ENTRY_CALL_TIME(glQueryMatrixxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glQueryMatrixxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glQueryMatrixxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glQueryMatrixxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glQueryMatrixxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glQueryMatrixxOES_Idx) = get_ts();
        }


	return retval;

}