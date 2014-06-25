#include <glTraceCommon.h>
#include <generated.h>

#define glWeightfvARB_wrp						\
    ((void  (*)(GLint size,const GLfloat *weights                                        \
    ))GL_ENTRY_PTR(glWeightfvARB_Idx))


GLAPI void  APIENTRY glWeightfvARB(GLint size,const GLfloat *weights)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWeightfvARB_Idx))
	{
            GL_ENTRY_PTR(glWeightfvARB_Idx) = dlsym(RTLD_NEXT,"glWeightfvARB");
            if(!GL_ENTRY_PTR(glWeightfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWeightfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightfvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightfvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glWeightfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightfvARB_Idx) = get_ts();
        }


	

}