#include <glTraceCommon.h>
#include <generated.h>

#define glDispatchComputeGroupSizeARB_wrp						\
    ((void  (*)(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z,GLuint group_size_x,GLuint group_size_y,GLuint group_size_z                                        \
    ))GL_ENTRY_PTR(glDispatchComputeGroupSizeARB_Idx))


GLAPI void  APIENTRY glDispatchComputeGroupSizeARB(GLuint num_groups_x,GLuint num_groups_y,GLuint num_groups_z,GLuint group_size_x,GLuint group_size_y,GLuint group_size_z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDispatchComputeGroupSizeARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDispatchComputeGroupSizeARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDispatchComputeGroupSizeARB_wrp(num_groups_x,num_groups_y,num_groups_z,group_size_x,group_size_y,group_size_z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDispatchComputeGroupSizeARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDispatchComputeGroupSizeARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDispatchComputeGroupSizeARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDispatchComputeGroupSizeARB_Idx),
				 GL_ENTRY_LAST_TS(glDispatchComputeGroupSizeARB_Idx));


        if(last_diff > 1000000000){
            printf("glDispatchComputeGroupSizeARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDispatchComputeGroupSizeARB_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchComputeGroupSizeARB_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchComputeGroupSizeARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDispatchComputeGroupSizeARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDispatchComputeGroupSizeARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDispatchComputeGroupSizeARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDispatchComputeGroupSizeARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDispatchComputeGroupSizeARB_Idx) = get_ts();
        }


	

}