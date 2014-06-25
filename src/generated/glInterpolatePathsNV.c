#include <glTraceCommon.h>
#include <generated.h>

#define glInterpolatePathsNV_wrp						\
    ((void  (*)(GLuint resultPath,GLuint pathA,GLuint pathB,GLfloat weight                                        \
    ))GL_ENTRY_PTR(glInterpolatePathsNV_Idx))


GLAPI void  APIENTRY glInterpolatePathsNV(GLuint resultPath,GLuint pathA,GLuint pathB,GLfloat weight)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glInterpolatePathsNV_Idx))
	{
            GL_ENTRY_PTR(glInterpolatePathsNV_Idx) = dlsym(RTLD_NEXT,"glInterpolatePathsNV");
            if(!GL_ENTRY_PTR(glInterpolatePathsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glInterpolatePathsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glInterpolatePathsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInterpolatePathsNV_wrp(resultPath,pathA,pathB,weight);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInterpolatePathsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInterpolatePathsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glInterpolatePathsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInterpolatePathsNV_Idx),
				 GL_ENTRY_LAST_TS(glInterpolatePathsNV_Idx));
        if(last_diff > 1000000000){
            printf("glInterpolatePathsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInterpolatePathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glInterpolatePathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glInterpolatePathsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glInterpolatePathsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInterpolatePathsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInterpolatePathsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInterpolatePathsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInterpolatePathsNV_Idx) = get_ts();
        }


	

}