#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUSurfaceAccessNV_wrp						\
    ((void  (*)(GLvdpauSurfaceNV surface,GLenum access                                        \
    ))GL_ENTRY_PTR(glVDPAUSurfaceAccessNV_Idx))


GLAPI void  APIENTRY glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface,GLenum access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVDPAUSurfaceAccessNV_Idx))
	{
            GL_ENTRY_PTR(glVDPAUSurfaceAccessNV_Idx) = dlsym(RTLD_NEXT,"glVDPAUSurfaceAccessNV");
            if(!GL_ENTRY_PTR(glVDPAUSurfaceAccessNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVDPAUSurfaceAccessNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUSurfaceAccessNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUSurfaceAccessNV_wrp(surface,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUSurfaceAccessNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUSurfaceAccessNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUSurfaceAccessNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUSurfaceAccessNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUSurfaceAccessNV_Idx));
        if(last_diff > 1000000000){
            printf("glVDPAUSurfaceAccessNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUSurfaceAccessNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUSurfaceAccessNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUSurfaceAccessNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUSurfaceAccessNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUSurfaceAccessNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUSurfaceAccessNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUSurfaceAccessNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUSurfaceAccessNV_Idx) = get_ts();
        }


	

}