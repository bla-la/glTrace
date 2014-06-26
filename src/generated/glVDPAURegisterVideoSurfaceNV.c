#include <glTraceCommon.h>
#include <generated.h>

#define glVDPAURegisterVideoSurfaceNV_wrp						\
    ((GLvdpauSurfaceNV  (*)(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames                                        \
    ))GL_ENTRY_PTR(glVDPAURegisterVideoSurfaceNV_Idx))


GLAPI GLvdpauSurfaceNV  APIENTRY glVDPAURegisterVideoSurfaceNV(const void *vdpSurface,GLenum target,GLsizei numTextureNames,const GLuint *textureNames)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVDPAURegisterVideoSurfaceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVDPAURegisterVideoSurfaceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLvdpauSurfaceNV  retval = glVDPAURegisterVideoSurfaceNV_wrp(vdpSurface,target,numTextureNames,textureNames);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVDPAURegisterVideoSurfaceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVDPAURegisterVideoSurfaceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVDPAURegisterVideoSurfaceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVDPAURegisterVideoSurfaceNV_Idx),
				 GL_ENTRY_LAST_TS(glVDPAURegisterVideoSurfaceNV_Idx));


        if(last_diff > 1000000000){
            printf("glVDPAURegisterVideoSurfaceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVDPAURegisterVideoSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAURegisterVideoSurfaceNV_Idx),
	             GL_ENTRY_CALL_TIME(glVDPAURegisterVideoSurfaceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVDPAURegisterVideoSurfaceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVDPAURegisterVideoSurfaceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVDPAURegisterVideoSurfaceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVDPAURegisterVideoSurfaceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVDPAURegisterVideoSurfaceNV_Idx) = get_ts();
        }


	return retval;

}