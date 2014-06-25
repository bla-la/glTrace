#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRange_wrp						\
    ((void  (*)(GLdouble near,GLdouble far                                        \
    ))GL_ENTRY_PTR(glDepthRange_Idx))


GLAPI void  APIENTRY glDepthRange(GLdouble near,GLdouble far)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthRange_Idx))
	{
            GL_ENTRY_PTR(glDepthRange_Idx) = dlsym(RTLD_NEXT,"glDepthRange");
            if(!GL_ENTRY_PTR(glDepthRange_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRange_wrp(near,far);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRange_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRange_Idx),
				 GL_ENTRY_LAST_TS(glDepthRange_Idx));
        if(last_diff > 1000000000){
            printf("glDepthRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRange_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRange_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRange_Idx) = get_ts();
        }


	

}