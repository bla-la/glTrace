#include <glTraceCommon.h>
#include <generated.h>

#define glBindProgramNV_wrp						\
    ((void  (*)(GLenum target,GLuint id                                        \
    ))GL_ENTRY_PTR(glBindProgramNV_Idx))


GLAPI void  APIENTRY glBindProgramNV(GLenum target,GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindProgramNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindProgramNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindProgramNV_wrp(target,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindProgramNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindProgramNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindProgramNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindProgramNV_Idx),
				 GL_ENTRY_LAST_TS(glBindProgramNV_Idx));


        if(last_diff > 1000000000){
            printf("glBindProgramNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindProgramNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindProgramNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindProgramNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindProgramNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindProgramNV_Idx) = get_ts();
        }


	

}