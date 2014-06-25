#include <glTraceCommon.h>
#include <generated.h>

#define glWeightPathsNV_wrp						\
    ((void  (*)(GLuint resultPath,GLsizei numPaths,const GLuint *paths,const GLfloat *weights                                        \
    ))GL_ENTRY_PTR(glWeightPathsNV_Idx))


GLAPI void  APIENTRY glWeightPathsNV(GLuint resultPath,GLsizei numPaths,const GLuint *paths,const GLfloat *weights)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWeightPathsNV_Idx))
	{
            GL_ENTRY_PTR(glWeightPathsNV_Idx) = dlsym(RTLD_NEXT,"glWeightPathsNV");
            if(!GL_ENTRY_PTR(glWeightPathsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWeightPathsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightPathsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightPathsNV_wrp(resultPath,numPaths,paths,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightPathsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightPathsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightPathsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightPathsNV_Idx),
				 GL_ENTRY_LAST_TS(glWeightPathsNV_Idx));
        if(last_diff > 1000000000){
            printf("glWeightPathsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightPathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glWeightPathsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightPathsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightPathsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightPathsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightPathsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightPathsNV_Idx) = get_ts();
        }


	

}