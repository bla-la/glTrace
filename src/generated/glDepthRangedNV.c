#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangedNV_wrp						\
    ((void  (*)(GLdouble zNear,GLdouble zFar                                        \
    ))GL_ENTRY_PTR(glDepthRangedNV_Idx))


GLAPI void  APIENTRY glDepthRangedNV(GLdouble zNear,GLdouble zFar)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDepthRangedNV_Idx))
	{
            GL_ENTRY_PTR(glDepthRangedNV_Idx) = dlsym(RTLD_NEXT,"glDepthRangedNV");
            if(!GL_ENTRY_PTR(glDepthRangedNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDepthRangedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangedNV_wrp(zNear,zFar);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangedNV_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangedNV_Idx));
        if(last_diff > 1000000000){
            printf("glDepthRangedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangedNV_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangedNV_Idx) = get_ts();
        }


	

}