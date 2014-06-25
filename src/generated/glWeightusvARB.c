#include <glTraceCommon.h>
#include <generated.h>

#define glWeightusvARB_wrp						\
    ((void  (*)(GLint size,const GLushort *weights                                        \
    ))GL_ENTRY_PTR(glWeightusvARB_Idx))


GLAPI void  APIENTRY glWeightusvARB(GLint size,const GLushort *weights)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWeightusvARB_Idx))
	{
            GL_ENTRY_PTR(glWeightusvARB_Idx) = dlsym(RTLD_NEXT,"glWeightusvARB");
            if(!GL_ENTRY_PTR(glWeightusvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWeightusvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightusvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightusvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightusvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightusvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightusvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightusvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightusvARB_Idx));
        if(last_diff > 1000000000){
            printf("glWeightusvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightusvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightusvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightusvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightusvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightusvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightusvARB_Idx) = get_ts();
        }


	

}