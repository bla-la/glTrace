#include <glTraceCommon.h>
#include <generated.h>

#define glCoverageMaskNV_wrp						\
    ((void  (*)(GLboolean mask                                        \
    ))GL_ENTRY_PTR(glCoverageMaskNV_Idx))


GLAPI void  APIENTRY glCoverageMaskNV(GLboolean mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCoverageMaskNV_Idx))
	{
            GL_ENTRY_PTR(glCoverageMaskNV_Idx) = dlsym(RTLD_NEXT,"glCoverageMaskNV");
            if(!GL_ENTRY_PTR(glCoverageMaskNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCoverageMaskNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCoverageMaskNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCoverageMaskNV_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCoverageMaskNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCoverageMaskNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCoverageMaskNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCoverageMaskNV_Idx),
				 GL_ENTRY_LAST_TS(glCoverageMaskNV_Idx));
        if(last_diff > 1000000000){
            printf("glCoverageMaskNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCoverageMaskNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverageMaskNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverageMaskNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCoverageMaskNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCoverageMaskNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCoverageMaskNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCoverageMaskNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCoverageMaskNV_Idx) = get_ts();
        }


	

}