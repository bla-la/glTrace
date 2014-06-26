#include <glTraceCommon.h>
#include <generated.h>

#define glResetMinmax_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glResetMinmax_Idx))


GLAPI void  APIENTRY glResetMinmax(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glResetMinmax_Idx))
    	{
            GL_ENTRY_PREV_TS(glResetMinmax_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glResetMinmax_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glResetMinmax_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glResetMinmax_Idx) ++;

        GL_ENTRY_LAST_TS(glResetMinmax_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glResetMinmax_Idx),
				 GL_ENTRY_LAST_TS(glResetMinmax_Idx));


        if(last_diff > 1000000000){
            printf("glResetMinmax %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glResetMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glResetMinmax_Idx),
	             GL_ENTRY_CALL_TIME(glResetMinmax_Idx) /
	             GL_ENTRY_CALL_COUNT(glResetMinmax_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glResetMinmax_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glResetMinmax_Idx) = 0;
             GL_ENTRY_CALL_TIME(glResetMinmax_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glResetMinmax_Idx) = get_ts();
        }


	

}