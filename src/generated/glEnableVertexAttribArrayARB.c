#include <glTraceCommon.h>
#include <generated.h>

#define glEnableVertexAttribArrayARB_wrp						\
    ((void  (*)(GLuint index                                        \
    ))GL_ENTRY_PTR(glEnableVertexAttribArrayARB_Idx))


GLAPI void  APIENTRY glEnableVertexAttribArrayARB(GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEnableVertexAttribArrayARB_Idx))
	{
            GL_ENTRY_PTR(glEnableVertexAttribArrayARB_Idx) = dlsym(RTLD_NEXT,"glEnableVertexAttribArrayARB");
            if(!GL_ENTRY_PTR(glEnableVertexAttribArrayARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEnableVertexAttribArrayARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableVertexAttribArrayARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableVertexAttribArrayARB_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableVertexAttribArrayARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableVertexAttribArrayARB_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableVertexAttribArrayARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableVertexAttribArrayARB_Idx),
				 GL_ENTRY_LAST_TS(glEnableVertexAttribArrayARB_Idx));
        if(last_diff > 1000000000){
            printf("glEnableVertexAttribArrayARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableVertexAttribArrayARB_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexAttribArrayARB_Idx),
	             GL_ENTRY_CALL_TIME(glEnableVertexAttribArrayARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableVertexAttribArrayARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableVertexAttribArrayARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableVertexAttribArrayARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableVertexAttribArrayARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableVertexAttribArrayARB_Idx) = get_ts();
        }


	

}