#include <glTraceCommon.h>
#include <generated.h>

#define glDepthBoundsdNV_wrp						\
    ((void  (*)(GLdouble zmin,GLdouble zmax                                        \
    ))GL_ENTRY_PTR(glDepthBoundsdNV_Idx))


GLAPI void  APIENTRY glDepthBoundsdNV(GLdouble zmin,GLdouble zmax)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDepthBoundsdNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthBoundsdNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthBoundsdNV_wrp(zmin,zmax);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthBoundsdNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthBoundsdNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthBoundsdNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthBoundsdNV_Idx),
				 GL_ENTRY_LAST_TS(glDepthBoundsdNV_Idx));


        if(last_diff > 1000000000){
            printf("glDepthBoundsdNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthBoundsdNV_Idx),
	             GL_ENTRY_CALL_TIME(glDepthBoundsdNV_Idx),
	             GL_ENTRY_CALL_TIME(glDepthBoundsdNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthBoundsdNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthBoundsdNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthBoundsdNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthBoundsdNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthBoundsdNV_Idx) = get_ts();
        }


	

}