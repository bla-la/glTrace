#include <glTraceCommon.h>
#include <generated.h>

#define glDispatchCompute_wrp						\
    ((void  (*)(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z                                        \
    ))GL_ENTRY_PTR(glDispatchCompute_Idx))


GLAPI void  APIENTRY glDispatchCompute(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDispatchCompute_Idx))
    	{
            GL_ENTRY_PREV_TS(glDispatchCompute_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDispatchCompute_wrp(num_groups_x,num_groups_y,num_groups_z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDispatchCompute_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDispatchCompute_Idx) ++;

        GL_ENTRY_LAST_TS(glDispatchCompute_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDispatchCompute_Idx),
				 GL_ENTRY_LAST_TS(glDispatchCompute_Idx));


        if(last_diff > 1000000000){
            printf("glDispatchCompute %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDispatchCompute_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchCompute_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchCompute_Idx) /
	             GL_ENTRY_CALL_COUNT(glDispatchCompute_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDispatchCompute_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDispatchCompute_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDispatchCompute_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDispatchCompute_Idx) = get_ts();
        }


	

}