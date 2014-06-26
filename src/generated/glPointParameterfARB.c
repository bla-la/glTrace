#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterfARB_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPointParameterfARB_Idx))


GLAPI void  APIENTRY glPointParameterfARB(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterfARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterfARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterfARB_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterfARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterfARB_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterfARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterfARB_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterfARB_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterfARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterfARB_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfARB_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterfARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterfARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterfARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterfARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterfARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterfARB_Idx) = get_ts();
        }


	

}