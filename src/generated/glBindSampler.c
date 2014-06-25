#include <glTraceCommon.h>
#include <generated.h>

#define glBindSampler_wrp						\
    ((void  (*)(GLuint unit,GLuint sampler                                        \
    ))GL_ENTRY_PTR(glBindSampler_Idx))


GLAPI void  APIENTRY glBindSampler(GLuint unit,GLuint sampler)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindSampler_Idx))
	{
            GL_ENTRY_PTR(glBindSampler_Idx) = dlsym(RTLD_NEXT,"glBindSampler");
            if(!GL_ENTRY_PTR(glBindSampler_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindSampler_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindSampler_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindSampler_wrp(unit,sampler);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindSampler_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindSampler_Idx) ++;

        GL_ENTRY_LAST_TS(glBindSampler_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindSampler_Idx),
				 GL_ENTRY_LAST_TS(glBindSampler_Idx));
        if(last_diff > 1000000000){
            printf("glBindSampler %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindSampler_Idx),
	             GL_ENTRY_CALL_TIME(glBindSampler_Idx),
	             GL_ENTRY_CALL_TIME(glBindSampler_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindSampler_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindSampler_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindSampler_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindSampler_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindSampler_Idx) = get_ts();
        }


	

}