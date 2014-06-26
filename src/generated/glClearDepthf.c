#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepthf_wrp						\
    ((void  (*)(GLfloat d                                        \
    ))GL_ENTRY_PTR(glClearDepthf_Idx))


GLAPI void  APIENTRY glClearDepthf(GLfloat d)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearDepthf_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepthf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepthf_wrp(d);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepthf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepthf_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepthf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepthf_Idx),
				 GL_ENTRY_LAST_TS(glClearDepthf_Idx));


        if(last_diff > 1000000000){
            printf("glClearDepthf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepthf_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthf_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthf_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepthf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepthf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepthf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepthf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepthf_Idx) = get_ts();
        }


	

}