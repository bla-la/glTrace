#include <glTraceCommon.h>
#include <generated.h>

#define glIndexMask_wrp						\
    ((void  (*)(GLuint mask                                        \
    ))GL_ENTRY_PTR(glIndexMask_Idx))


GLAPI void  APIENTRY glIndexMask(GLuint mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexMask_Idx))
	{
            GL_ENTRY_PTR(glIndexMask_Idx) = dlsym(RTLD_NEXT,"glIndexMask");
            if(!GL_ENTRY_PTR(glIndexMask_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexMask_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexMask_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexMask_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexMask_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexMask_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexMask_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexMask_Idx),
				 GL_ENTRY_LAST_TS(glIndexMask_Idx));
        if(last_diff > 1000000000){
            printf("glIndexMask %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexMask_Idx),
	             GL_ENTRY_CALL_TIME(glIndexMask_Idx),
	             GL_ENTRY_CALL_TIME(glIndexMask_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexMask_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexMask_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexMask_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexMask_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexMask_Idx) = get_ts();
        }


	

}