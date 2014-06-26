#include <glTraceCommon.h>
#include <generated.h>

#define glWeightuivARB_wrp						\
    ((void  (*)(GLint size,const GLuint *weights                                        \
    ))GL_ENTRY_PTR(glWeightuivARB_Idx))


GLAPI void  APIENTRY glWeightuivARB(GLint size,const GLuint *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightuivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightuivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightuivARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightuivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightuivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightuivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightuivARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightuivARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightuivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightuivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightuivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightuivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightuivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightuivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightuivARB_Idx) = get_ts();
        }


	

}