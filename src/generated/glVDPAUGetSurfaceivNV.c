#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAUGetSurfaceivNV_wrp						\
    ((void  (*)(GLvdpauSurfaceNV surface,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values                                        \
    ))GL_ENTRY_PTR(glVDPAUGetSurfaceivNV_Idx))


GLAPI void  APIENTRY glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVDPAUGetSurfaceivNV_Idx))
	{
            GL_ENTRY_PTR(glVDPAUGetSurfaceivNV_Idx) = dlsym(RTLD_NEXT,"glVDPAUGetSurfaceivNV");
            if(!GL_ENTRY_PTR(glVDPAUGetSurfaceivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVDPAUGetSurfaceivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAUGetSurfaceivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVDPAUGetSurfaceivNV_wrp(surface,pname,bufSize,length,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAUGetSurfaceivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAUGetSurfaceivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAUGetSurfaceivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAUGetSurfaceivNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAUGetSurfaceivNV_Idx));
        if(last_diff > 1000000000){
            printf("glVDPAUGetSurfaceivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAUGetSurfaceivNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUGetSurfaceivNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAUGetSurfaceivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAUGetSurfaceivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAUGetSurfaceivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAUGetSurfaceivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAUGetSurfaceivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAUGetSurfaceivNV_Idx) = get_ts();
        }


	

}