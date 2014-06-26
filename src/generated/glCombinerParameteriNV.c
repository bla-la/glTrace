#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerParameteriNV_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glCombinerParameteriNV_Idx))


GLAPI void  APIENTRY glCombinerParameteriNV(GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCombinerParameteriNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerParameteriNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerParameteriNV_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerParameteriNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerParameteriNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerParameteriNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerParameteriNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerParameteriNV_Idx));


        if(last_diff > 1000000000){
            printf("glCombinerParameteriNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameteriNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerParameteriNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerParameteriNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerParameteriNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerParameteriNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerParameteriNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerParameteriNV_Idx) = get_ts();
        }


	

}