#include <glTraceCommon.h>
#include <generated.h>

#define glGenFencesAPPLE_wrp						\
    ((void  (*)(GLsizei n,GLuint *fences                                        \
    ))GL_ENTRY_PTR(glGenFencesAPPLE_Idx))


GLAPI void  APIENTRY glGenFencesAPPLE(GLsizei n,GLuint *fences)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenFencesAPPLE_Idx))
	{
            GL_ENTRY_PTR(glGenFencesAPPLE_Idx) = dlsym(RTLD_NEXT,"glGenFencesAPPLE");
            if(!GL_ENTRY_PTR(glGenFencesAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenFencesAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFencesAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenFencesAPPLE_wrp(n,fences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFencesAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFencesAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFencesAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFencesAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGenFencesAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glGenFencesAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFencesAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGenFencesAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGenFencesAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFencesAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFencesAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFencesAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFencesAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFencesAPPLE_Idx) = get_ts();
        }


	

}