#include <glTraceCommon.h>
#include <generated.h>

#define glTextureImage3DMultisampleCoverageNV_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations                                        \
    ))GL_ENTRY_PTR(glTextureImage3DMultisampleCoverageNV_Idx))


GLAPI void  APIENTRY glTextureImage3DMultisampleCoverageNV(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureImage3DMultisampleCoverageNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureImage3DMultisampleCoverageNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureImage3DMultisampleCoverageNV_wrp(texture,target,coverageSamples,colorSamples,internalFormat,width,height,depth,fixedSampleLocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureImage3DMultisampleCoverageNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureImage3DMultisampleCoverageNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureImage3DMultisampleCoverageNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureImage3DMultisampleCoverageNV_Idx),
				 GL_ENTRY_LAST_TS(glTextureImage3DMultisampleCoverageNV_Idx));


        if(last_diff > 1000000000){
            printf("glTextureImage3DMultisampleCoverageNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureImage3DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage3DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage3DMultisampleCoverageNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureImage3DMultisampleCoverageNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureImage3DMultisampleCoverageNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureImage3DMultisampleCoverageNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureImage3DMultisampleCoverageNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureImage3DMultisampleCoverageNV_Idx) = get_ts();
        }


	

}