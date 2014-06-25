#include <glTraceCommon.h>
#include <generated.h>

#define glGetHistogramParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetHistogramParameterxvOES_Idx))


GLAPI void  APIENTRY glGetHistogramParameterxvOES(GLenum target,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetHistogramParameterxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetHistogramParameterxvOES_Idx) = dlsym(RTLD_NEXT,"glGetHistogramParameterxvOES");
            if(!GL_ENTRY_PTR(glGetHistogramParameterxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetHistogramParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHistogramParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetHistogramParameterxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHistogramParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHistogramParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHistogramParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHistogramParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetHistogramParameterxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetHistogramParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHistogramParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHistogramParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHistogramParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHistogramParameterxvOES_Idx) = get_ts();
        }


	

}