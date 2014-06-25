#include <glTraceCommon.h>
#include <generated.h>

#define glSamplePatternEXT_wrp						\
    ((void  (*)(GLenum pattern                                        \
    ))GL_ENTRY_PTR(glSamplePatternEXT_Idx))


GLAPI void  APIENTRY glSamplePatternEXT(GLenum pattern)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSamplePatternEXT_Idx))
	{
            GL_ENTRY_PTR(glSamplePatternEXT_Idx) = dlsym(RTLD_NEXT,"glSamplePatternEXT");
            if(!GL_ENTRY_PTR(glSamplePatternEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSamplePatternEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplePatternEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplePatternEXT_wrp(pattern);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplePatternEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplePatternEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplePatternEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplePatternEXT_Idx),
				 GL_ENTRY_LAST_TS(glSamplePatternEXT_Idx));
        if(last_diff > 1000000000){
            printf("glSamplePatternEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplePatternEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplePatternEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplePatternEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplePatternEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplePatternEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplePatternEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplePatternEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplePatternEXT_Idx) = get_ts();
        }


	

}