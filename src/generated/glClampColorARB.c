#include <glTraceCommon.h>
#include <generated.h>

#define glClampColorARB_wrp						\
    ((void  (*)(GLenum target,GLenum clamp                                        \
    ))GL_ENTRY_PTR(glClampColorARB_Idx))


GLAPI void  APIENTRY glClampColorARB(GLenum target,GLenum clamp)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClampColorARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glClampColorARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClampColorARB_wrp(target,clamp);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClampColorARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClampColorARB_Idx) ++;

        GL_ENTRY_LAST_TS(glClampColorARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClampColorARB_Idx),
				 GL_ENTRY_LAST_TS(glClampColorARB_Idx));


        if(last_diff > 1000000000){
            printf("glClampColorARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClampColorARB_Idx),
	             GL_ENTRY_CALL_TIME(glClampColorARB_Idx),
	             GL_ENTRY_CALL_TIME(glClampColorARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glClampColorARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClampColorARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClampColorARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClampColorARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClampColorARB_Idx) = get_ts();
        }


	

}