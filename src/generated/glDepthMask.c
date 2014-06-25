#include <glTraceCommon.h>
#include <generated.h>

#define glDepthMask_wrp						\
    ((void  (*)(GLboolean flag                                        \
    ))GL_ENTRY_PTR(glDepthMask_Idx))


GLAPI void  APIENTRY glDepthMask(GLboolean flag)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthMask_Idx))
	{
            GL_ENTRY_PTR(glDepthMask_Idx) = dlsym(RTLD_NEXT,"glDepthMask");
            if(!GL_ENTRY_PTR(glDepthMask_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthMask_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthMask_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthMask_wrp(flag);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthMask_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthMask_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthMask_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthMask_Idx),
				 GL_ENTRY_LAST_TS(glDepthMask_Idx));
        if(last_diff > 1000000000){
            printf("glDepthMask %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthMask_Idx),
	             GL_ENTRY_CALL_TIME(glDepthMask_Idx),
	             GL_ENTRY_CALL_TIME(glDepthMask_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthMask_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthMask_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthMask_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthMask_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthMask_Idx) = get_ts();
        }


	

}