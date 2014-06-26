#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAURegisterOutputSurfaceNV_wrp						\
    ((GLvdpauSurfaceNV  (*)(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames                                        \
    ))GL_ENTRY_PTR(glVDPAURegisterOutputSurfaceNV_Idx))


GLAPI GLvdpauSurfaceNV  APIENTRY glVDPAURegisterOutputSurfaceNV(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVDPAURegisterOutputSurfaceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAURegisterOutputSurfaceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLvdpauSurfaceNV  retval = glVDPAURegisterOutputSurfaceNV_wrp(vdpSurface,target,numTextureNames,textureNames);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAURegisterOutputSurfaceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAURegisterOutputSurfaceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAURegisterOutputSurfaceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAURegisterOutputSurfaceNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAURegisterOutputSurfaceNV_Idx));


        if(last_diff > 1000000000){
            printf("glVDPAURegisterOutputSurfaceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAURegisterOutputSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAURegisterOutputSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAURegisterOutputSurfaceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAURegisterOutputSurfaceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAURegisterOutputSurfaceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAURegisterOutputSurfaceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAURegisterOutputSurfaceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAURegisterOutputSurfaceNV_Idx) = get_ts();
        }


	return retval;

}