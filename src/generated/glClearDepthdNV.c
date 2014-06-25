#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepthdNV_wrp						\
    ((void  (*)(GLdouble depth                                        \
    ))GL_ENTRY_PTR(glClearDepthdNV_Idx))


GLAPI void  APIENTRY glClearDepthdNV(GLdouble depth)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearDepthdNV_Idx))
	{
            GL_ENTRY_PTR(glClearDepthdNV_Idx) = dlsym(RTLD_NEXT,"glClearDepthdNV");
            if(!GL_ENTRY_PTR(glClearDepthdNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearDepthdNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepthdNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepthdNV_wrp(depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepthdNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepthdNV_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepthdNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepthdNV_Idx),
				 GL_ENTRY_LAST_TS(glClearDepthdNV_Idx));
        if(last_diff > 1000000000){
            printf("glClearDepthdNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepthdNV_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthdNV_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthdNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepthdNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepthdNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepthdNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepthdNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepthdNV_Idx) = get_ts();
        }


	

}