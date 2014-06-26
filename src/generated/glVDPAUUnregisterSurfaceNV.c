#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUUnregisterSurfaceNV_wrp						\
    ((void  (*)(GLvdpauSurfaceNV surface                                        \
    ))GL_ENTRY_PTR(glVDPAUUnregisterSurfaceNV_Idx))


GLAPI void  APIENTRY glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVDPAUUnregisterSurfaceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUUnregisterSurfaceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUUnregisterSurfaceNV_wrp(surface);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUUnregisterSurfaceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUUnregisterSurfaceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUUnregisterSurfaceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUUnregisterSurfaceNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUUnregisterSurfaceNV_Idx));


        if(last_diff > 1000000000){
            printf("glVDPAUUnregisterSurfaceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUUnregisterSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUUnregisterSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUUnregisterSurfaceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUUnregisterSurfaceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUUnregisterSurfaceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUUnregisterSurfaceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUUnregisterSurfaceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUUnregisterSurfaceNV_Idx) = get_ts();
        }


	

}