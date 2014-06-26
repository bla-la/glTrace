#include <glTraceCommon.h>
#include <generated.h>

#define glGenFencesNV_wrp						\
    ((void  (*)(GLsizei n,GLuint *fences                                        \
    ))GL_ENTRY_PTR(glGenFencesNV_Idx))


GLAPI void  APIENTRY glGenFencesNV(GLsizei n,GLuint *fences)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenFencesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFencesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenFencesNV_wrp(n,fences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFencesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFencesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFencesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFencesNV_Idx),
				 GL_ENTRY_LAST_TS(glGenFencesNV_Idx));


        if(last_diff > 1000000000){
            printf("glGenFencesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFencesNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenFencesNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenFencesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFencesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFencesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFencesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFencesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFencesNV_Idx) = get_ts();
        }


	

}