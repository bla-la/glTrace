#include <glTraceCommon.h>
#include <generated.h>

#define glProgramVertexLimitNV_wrp						\
    ((void  (*)(GLenum target,GLint limit                                        \
    ))GL_ENTRY_PTR(glProgramVertexLimitNV_Idx))


GLAPI void  APIENTRY glProgramVertexLimitNV(GLenum target,GLint limit)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramVertexLimitNV_Idx))
	{
            GL_ENTRY_PTR(glProgramVertexLimitNV_Idx) = dlsym(RTLD_NEXT,"glProgramVertexLimitNV");
            if(!GL_ENTRY_PTR(glProgramVertexLimitNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramVertexLimitNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramVertexLimitNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramVertexLimitNV_wrp(target,limit);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramVertexLimitNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramVertexLimitNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramVertexLimitNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramVertexLimitNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramVertexLimitNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramVertexLimitNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramVertexLimitNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramVertexLimitNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramVertexLimitNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramVertexLimitNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramVertexLimitNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramVertexLimitNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramVertexLimitNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramVertexLimitNV_Idx) = get_ts();
        }


	

}