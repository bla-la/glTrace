#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUMapSurfacesNV_wrp						\
    ((void  (*)(GLsizei numSurfaces,const GLvdpauSurfaceNV *surfaces                                        \
    ))GL_ENTRY_PTR(glVDPAUMapSurfacesNV_Idx))


GLAPI void  APIENTRY glVDPAUMapSurfacesNV(GLsizei numSurfaces,const GLvdpauSurfaceNV *surfaces)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVDPAUMapSurfacesNV_Idx))
	{
            GL_ENTRY_PTR(glVDPAUMapSurfacesNV_Idx) = dlsym(RTLD_NEXT,"glVDPAUMapSurfacesNV");
            if(!GL_ENTRY_PTR(glVDPAUMapSurfacesNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVDPAUMapSurfacesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUMapSurfacesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUMapSurfacesNV_wrp(numSurfaces,surfaces);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUMapSurfacesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUMapSurfacesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUMapSurfacesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUMapSurfacesNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUMapSurfacesNV_Idx));
        if(last_diff > 1000000000){
            printf("glVDPAUMapSurfacesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUMapSurfacesNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUMapSurfacesNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUMapSurfacesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUMapSurfacesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUMapSurfacesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUMapSurfacesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUMapSurfacesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUMapSurfacesNV_Idx) = get_ts();
        }


	

}