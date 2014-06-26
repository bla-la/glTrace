#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUIsSurfaceNV_wrp						\
    ((GLboolean  (*)(GLvdpauSurfaceNV surface                                        \
    ))GL_ENTRY_PTR(glVDPAUIsSurfaceNV_Idx))


GLAPI GLboolean  APIENTRY glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVDPAUIsSurfaceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUIsSurfaceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glVDPAUIsSurfaceNV_wrp(surface);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUIsSurfaceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUIsSurfaceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUIsSurfaceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUIsSurfaceNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUIsSurfaceNV_Idx));


        if(last_diff > 1000000000){
            printf("glVDPAUIsSurfaceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUIsSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUIsSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUIsSurfaceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUIsSurfaceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUIsSurfaceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUIsSurfaceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUIsSurfaceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUIsSurfaceNV_Idx) = get_ts();
        }


	return retval;

}