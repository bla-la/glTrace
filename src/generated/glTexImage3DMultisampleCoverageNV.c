#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage3DMultisampleCoverageNV_wrp						\
    ((void  (*)(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations                                        \
    ))GL_ENTRY_PTR(glTexImage3DMultisampleCoverageNV_Idx))


GLAPI void  APIENTRY glTexImage3DMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLboolean fixedSampleLocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexImage3DMultisampleCoverageNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage3DMultisampleCoverageNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage3DMultisampleCoverageNV_wrp(target,coverageSamples,colorSamples,internalFormat,width,height,depth,fixedSampleLocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage3DMultisampleCoverageNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage3DMultisampleCoverageNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage3DMultisampleCoverageNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage3DMultisampleCoverageNV_Idx),
				 GL_ENTRY_LAST_TS(glTexImage3DMultisampleCoverageNV_Idx));


        if(last_diff > 1000000000){
            printf("glTexImage3DMultisampleCoverageNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage3DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DMultisampleCoverageNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage3DMultisampleCoverageNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage3DMultisampleCoverageNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage3DMultisampleCoverageNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage3DMultisampleCoverageNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage3DMultisampleCoverageNV_Idx) = get_ts();
        }


	

}