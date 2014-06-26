#include <glTraceCommon.h>
#include <generated.h>

#define glIsSampler_wrp						\
    ((GLboolean  (*)(GLuint sampler                                        \
    ))GL_ENTRY_PTR(glIsSampler_Idx))


GLAPI GLboolean  APIENTRY glIsSampler(GLuint sampler)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsSampler_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsSampler_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsSampler_wrp(sampler);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsSampler_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsSampler_Idx) ++;

        GL_ENTRY_LAST_TS(glIsSampler_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsSampler_Idx),
				 GL_ENTRY_LAST_TS(glIsSampler_Idx));


        if(last_diff > 1000000000){
            printf("glIsSampler %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsSampler_Idx),
	             GL_ENTRY_CALL_TIME(glIsSampler_Idx),
	             GL_ENTRY_CALL_TIME(glIsSampler_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsSampler_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsSampler_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsSampler_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsSampler_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsSampler_Idx) = get_ts();
        }


	return retval;

}