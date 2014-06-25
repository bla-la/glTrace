#include <glTraceCommon.h>
#include <generated.h>

#define glTextureImage2DMultisampleCoverageNV_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations                                        \
    ))GL_ENTRY_PTR(glTextureImage2DMultisampleCoverageNV_Idx))


GLAPI void  APIENTRY glTextureImage2DMultisampleCoverageNV(GLuint texture,GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureImage2DMultisampleCoverageNV_Idx))
	{
            GL_ENTRY_PTR(glTextureImage2DMultisampleCoverageNV_Idx) = dlsym(RTLD_NEXT,"glTextureImage2DMultisampleCoverageNV");
            if(!GL_ENTRY_PTR(glTextureImage2DMultisampleCoverageNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureImage2DMultisampleCoverageNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureImage2DMultisampleCoverageNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureImage2DMultisampleCoverageNV_wrp(texture,target,coverageSamples,colorSamples,internalFormat,width,height,fixedSampleLocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleCoverageNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleCoverageNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureImage2DMultisampleCoverageNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureImage2DMultisampleCoverageNV_Idx),
				 GL_ENTRY_LAST_TS(glTextureImage2DMultisampleCoverageNV_Idx));
        if(last_diff > 1000000000){
            printf("glTextureImage2DMultisampleCoverageNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleCoverageNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleCoverageNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleCoverageNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleCoverageNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleCoverageNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureImage2DMultisampleCoverageNV_Idx) = get_ts();
        }


	

}