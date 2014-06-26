#include <glTraceCommon.h>
#include <generated.h>

#define glEdgeFlagPointer_wrp						\
    ((void  (*)(GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glEdgeFlagPointer_Idx))


GLAPI void  APIENTRY glEdgeFlagPointer(GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEdgeFlagPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glEdgeFlagPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEdgeFlagPointer_wrp(stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEdgeFlagPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEdgeFlagPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glEdgeFlagPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEdgeFlagPointer_Idx),
				 GL_ENTRY_LAST_TS(glEdgeFlagPointer_Idx));


        if(last_diff > 1000000000){
            printf("glEdgeFlagPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointer_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointer_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEdgeFlagPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEdgeFlagPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEdgeFlagPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEdgeFlagPointer_Idx) = get_ts();
        }


	

}