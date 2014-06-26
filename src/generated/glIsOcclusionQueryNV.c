#include <glTraceCommon.h>
#include <generated.h>

#define glIsOcclusionQueryNV_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsOcclusionQueryNV_Idx))


GLAPI GLboolean  APIENTRY glIsOcclusionQueryNV(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsOcclusionQueryNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsOcclusionQueryNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsOcclusionQueryNV_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsOcclusionQueryNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsOcclusionQueryNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsOcclusionQueryNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsOcclusionQueryNV_Idx),
				 GL_ENTRY_LAST_TS(glIsOcclusionQueryNV_Idx));


        if(last_diff > 1000000000){
            printf("glIsOcclusionQueryNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsOcclusionQueryNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsOcclusionQueryNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsOcclusionQueryNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsOcclusionQueryNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsOcclusionQueryNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsOcclusionQueryNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsOcclusionQueryNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsOcclusionQueryNV_Idx) = get_ts();
        }


	return retval;

}