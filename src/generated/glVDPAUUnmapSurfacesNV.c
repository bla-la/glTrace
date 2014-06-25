#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUUnmapSurfacesNV_wrp						\
    ((void  (*)(GLsizei numSurface,const GLvdpauSurfaceNV *surfaces                                        \
    ))GL_ENTRY_PTR(glVDPAUUnmapSurfacesNV_Idx))


GLAPI void  APIENTRY glVDPAUUnmapSurfacesNV(GLsizei numSurface,const GLvdpauSurfaceNV *surfaces)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVDPAUUnmapSurfacesNV_Idx))
	{
            GL_ENTRY_PTR(glVDPAUUnmapSurfacesNV_Idx) = dlsym(RTLD_NEXT,"glVDPAUUnmapSurfacesNV");
            if(!GL_ENTRY_PTR(glVDPAUUnmapSurfacesNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVDPAUUnmapSurfacesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUUnmapSurfacesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUUnmapSurfacesNV_wrp(numSurface,surfaces);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUUnmapSurfacesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUUnmapSurfacesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUUnmapSurfacesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUUnmapSurfacesNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUUnmapSurfacesNV_Idx));
        if(last_diff > 1000000000){
            printf("glVDPAUUnmapSurfacesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUUnmapSurfacesNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUUnmapSurfacesNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUUnmapSurfacesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUUnmapSurfacesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUUnmapSurfacesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUUnmapSurfacesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUUnmapSurfacesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUUnmapSurfacesNV_Idx) = get_ts();
        }


	

}