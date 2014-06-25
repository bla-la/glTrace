#include <glTraceCommon.h>
#include <generated.h>

#define glMinSampleShading_wrp						\
    ((void  (*)(GLfloat value                                        \
    ))GL_ENTRY_PTR(glMinSampleShading_Idx))


GLAPI void  APIENTRY glMinSampleShading(GLfloat value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMinSampleShading_Idx))
	{
            GL_ENTRY_PTR(glMinSampleShading_Idx) = dlsym(RTLD_NEXT,"glMinSampleShading");
            if(!GL_ENTRY_PTR(glMinSampleShading_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMinSampleShading_Idx))
    	{
            GL_ENTRY_PREV_TS(glMinSampleShading_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMinSampleShading_wrp(value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMinSampleShading_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMinSampleShading_Idx) ++;

        GL_ENTRY_LAST_TS(glMinSampleShading_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMinSampleShading_Idx),
				 GL_ENTRY_LAST_TS(glMinSampleShading_Idx));
        if(last_diff > 1000000000){
            printf("glMinSampleShading %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMinSampleShading_Idx),
	             GL_ENTRY_CALL_TIME(glMinSampleShading_Idx),
	             GL_ENTRY_CALL_TIME(glMinSampleShading_Idx) /
	             GL_ENTRY_CALL_COUNT(glMinSampleShading_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMinSampleShading_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMinSampleShading_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMinSampleShading_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMinSampleShading_Idx) = get_ts();
        }


	

}