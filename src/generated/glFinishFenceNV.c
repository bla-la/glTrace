#include <glTraceCommon.h>
#include <generated.h>

#define glFinishFenceNV_wrp						\
    ((void  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glFinishFenceNV_Idx))


GLAPI void  APIENTRY glFinishFenceNV(GLuint fence)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFinishFenceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFinishFenceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFinishFenceNV_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFinishFenceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFinishFenceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFinishFenceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFinishFenceNV_Idx),
				 GL_ENTRY_LAST_TS(glFinishFenceNV_Idx));


        if(last_diff > 1000000000){
            printf("glFinishFenceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFinishFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glFinishFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glFinishFenceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFinishFenceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFinishFenceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFinishFenceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFinishFenceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFinishFenceNV_Idx) = get_ts();
        }


	

}