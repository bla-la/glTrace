#include <glTraceCommon.h>
#include <generated.h>

#define glBeginOcclusionQueryNV_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glBeginOcclusionQueryNV_Idx))


GLAPI void  APIENTRY glBeginOcclusionQueryNV(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginOcclusionQueryNV_Idx))
	{
            GL_ENTRY_PTR(glBeginOcclusionQueryNV_Idx) = dlsym(RTLD_NEXT,"glBeginOcclusionQueryNV");
            if(!GL_ENTRY_PTR(glBeginOcclusionQueryNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginOcclusionQueryNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginOcclusionQueryNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginOcclusionQueryNV_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginOcclusionQueryNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginOcclusionQueryNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginOcclusionQueryNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginOcclusionQueryNV_Idx),
				 GL_ENTRY_LAST_TS(glBeginOcclusionQueryNV_Idx));
        if(last_diff > 1000000000){
            printf("glBeginOcclusionQueryNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginOcclusionQueryNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginOcclusionQueryNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginOcclusionQueryNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginOcclusionQueryNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginOcclusionQueryNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginOcclusionQueryNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginOcclusionQueryNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginOcclusionQueryNV_Idx) = get_ts();
        }


	

}