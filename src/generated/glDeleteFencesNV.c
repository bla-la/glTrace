#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteFencesNV_wrp						\
    ((void  (*)(GLsizei n,const GLuint *fences                                        \
    ))GL_ENTRY_PTR(glDeleteFencesNV_Idx))


GLAPI void  APIENTRY glDeleteFencesNV(GLsizei n,const GLuint *fences)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteFencesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteFencesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteFencesNV_wrp(n,fences);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteFencesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteFencesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteFencesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteFencesNV_Idx),
				 GL_ENTRY_LAST_TS(glDeleteFencesNV_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteFencesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteFencesNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFencesNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFencesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteFencesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteFencesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteFencesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteFencesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteFencesNV_Idx) = get_ts();
        }


	

}