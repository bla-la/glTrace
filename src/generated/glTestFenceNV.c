#include <glTraceCommon.h>
#include <generated.h>

#define glTestFenceNV_wrp						\
    ((GLboolean  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glTestFenceNV_Idx))


GLAPI GLboolean  APIENTRY glTestFenceNV(GLuint fence)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTestFenceNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTestFenceNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glTestFenceNV_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTestFenceNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTestFenceNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTestFenceNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTestFenceNV_Idx),
				 GL_ENTRY_LAST_TS(glTestFenceNV_Idx));


        if(last_diff > 1000000000){
            printf("glTestFenceNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTestFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glTestFenceNV_Idx),
	             GL_ENTRY_CALL_TIME(glTestFenceNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTestFenceNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTestFenceNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTestFenceNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTestFenceNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTestFenceNV_Idx) = get_ts();
        }


	return retval;

}