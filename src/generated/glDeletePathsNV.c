#include <glTraceCommon.h>
#include <generated.h>

#define glDeletePathsNV_wrp						\
    ((void  (*)(GLuint path,GLsizei range                                        \
    ))GL_ENTRY_PTR(glDeletePathsNV_Idx))


GLAPI void  APIENTRY glDeletePathsNV(GLuint path,GLsizei range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeletePathsNV_Idx))
	{
            GL_ENTRY_PTR(glDeletePathsNV_Idx) = dlsym(RTLD_NEXT,"glDeletePathsNV");
            if(!GL_ENTRY_PTR(glDeletePathsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeletePathsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeletePathsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeletePathsNV_wrp(path,range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeletePathsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeletePathsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDeletePathsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeletePathsNV_Idx),
				 GL_ENTRY_LAST_TS(glDeletePathsNV_Idx));
        if(last_diff > 1000000000){
            printf("glDeletePathsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeletePathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePathsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeletePathsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeletePathsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeletePathsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeletePathsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeletePathsNV_Idx) = get_ts();
        }


	

}