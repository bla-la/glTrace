#include <glTraceCommon.h>
#include <generated.h>

#define glGenPathsNV_wrp						\
    ((GLuint  (*)(GLsizei range                                        \
    ))GL_ENTRY_PTR(glGenPathsNV_Idx))


GLAPI GLuint  APIENTRY glGenPathsNV(GLsizei range)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenPathsNV_Idx))
	{
            GL_ENTRY_PTR(glGenPathsNV_Idx) = dlsym(RTLD_NEXT,"glGenPathsNV");
            if(!GL_ENTRY_PTR(glGenPathsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenPathsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenPathsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenPathsNV_wrp(range);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenPathsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenPathsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGenPathsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenPathsNV_Idx),
				 GL_ENTRY_LAST_TS(glGenPathsNV_Idx));
        if(last_diff > 1000000000){
            printf("glGenPathsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenPathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenPathsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenPathsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenPathsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenPathsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenPathsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenPathsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenPathsNV_Idx) = get_ts();
        }


	return retval;

}