#include <glTraceCommon.h>
#include <generated.h>

#define glRenderbufferStorageMultisampleCoverageNV_wrp						\
    ((void  (*)(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glRenderbufferStorageMultisampleCoverageNV_Idx))


GLAPI void  APIENTRY glRenderbufferStorageMultisampleCoverageNV(GLenum target,GLsizei coverageSamples,GLsizei colorSamples,GLenum internalformat,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleCoverageNV_Idx))
	{
            GL_ENTRY_PTR(glRenderbufferStorageMultisampleCoverageNV_Idx) = dlsym(RTLD_NEXT,"glRenderbufferStorageMultisampleCoverageNV");
            if(!GL_ENTRY_PTR(glRenderbufferStorageMultisampleCoverageNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleCoverageNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleCoverageNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRenderbufferStorageMultisampleCoverageNV_wrp(target,coverageSamples,colorSamples,internalformat,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleCoverageNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleCoverageNV_Idx) ++;

        GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleCoverageNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleCoverageNV_Idx),
				 GL_ENTRY_LAST_TS(glRenderbufferStorageMultisampleCoverageNV_Idx));
        if(last_diff > 1000000000){
            printf("glRenderbufferStorageMultisampleCoverageNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleCoverageNV_Idx),
	             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleCoverageNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleCoverageNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleCoverageNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRenderbufferStorageMultisampleCoverageNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRenderbufferStorageMultisampleCoverageNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRenderbufferStorageMultisampleCoverageNV_Idx) = get_ts();
        }


	

}