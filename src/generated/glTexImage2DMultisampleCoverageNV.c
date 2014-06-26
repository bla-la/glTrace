#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage2DMultisampleCoverageNV_wrp						\
    ((void  (*)(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations                                        \
    ))GL_ENTRY_PTR(glTexImage2DMultisampleCoverageNV_Idx))


GLAPI void  APIENTRY glTexImage2DMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexImage2DMultisampleCoverageNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage2DMultisampleCoverageNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage2DMultisampleCoverageNV_wrp(target,coverageSamples,colorSamples,internalFormat,width,height,fixedSampleLocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage2DMultisampleCoverageNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage2DMultisampleCoverageNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage2DMultisampleCoverageNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage2DMultisampleCoverageNV_Idx),
				 GL_ENTRY_LAST_TS(glTexImage2DMultisampleCoverageNV_Idx));


        if(last_diff > 1000000000){
            printf("glTexImage2DMultisampleCoverageNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage2DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage2DMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage2DMultisampleCoverageNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage2DMultisampleCoverageNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage2DMultisampleCoverageNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage2DMultisampleCoverageNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage2DMultisampleCoverageNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage2DMultisampleCoverageNV_Idx) = get_ts();
        }


	

}