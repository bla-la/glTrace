#include <glTraceCommon.h>
#include <generated.h>

#define glPushClientAttrib_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glPushClientAttrib_Idx))


GLAPI void  APIENTRY glPushClientAttrib(GLbitfield mask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPushClientAttrib_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushClientAttrib_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushClientAttrib_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushClientAttrib_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushClientAttrib_Idx) ++;

        GL_ENTRY_LAST_TS(glPushClientAttrib_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushClientAttrib_Idx),
				 GL_ENTRY_LAST_TS(glPushClientAttrib_Idx));


        if(last_diff > 1000000000){
            printf("glPushClientAttrib %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushClientAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glPushClientAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glPushClientAttrib_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushClientAttrib_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushClientAttrib_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushClientAttrib_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushClientAttrib_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushClientAttrib_Idx) = get_ts();
        }


	

}