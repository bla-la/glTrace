#include <glTraceCommon.h>
#include <generated.h>

#define glGetnPolygonStippleARB_wrp						\
    ((void  (*)(GLsizei bufSize,GLubyte *pattern                                        \
    ))GL_ENTRY_PTR(glGetnPolygonStippleARB_Idx))


GLAPI void  APIENTRY glGetnPolygonStippleARB(GLsizei bufSize,GLubyte *pattern)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnPolygonStippleARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnPolygonStippleARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnPolygonStippleARB_wrp(bufSize,pattern);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnPolygonStippleARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnPolygonStippleARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnPolygonStippleARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnPolygonStippleARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnPolygonStippleARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnPolygonStippleARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnPolygonStippleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPolygonStippleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPolygonStippleARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnPolygonStippleARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnPolygonStippleARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnPolygonStippleARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnPolygonStippleARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnPolygonStippleARB_Idx) = get_ts();
        }


	

}