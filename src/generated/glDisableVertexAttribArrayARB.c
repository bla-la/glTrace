#include <glTraceCommon.h>
#include <generated.h>

#define glDisableVertexAttribArrayARB_wrp						\
    ((void  (*)(GLuint index                                        \
    ))GL_ENTRY_PTR(glDisableVertexAttribArrayARB_Idx))


GLAPI void  APIENTRY glDisableVertexAttribArrayARB(GLuint index)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableVertexAttribArrayARB_Idx))
	{
            GL_ENTRY_PTR(glDisableVertexAttribArrayARB_Idx) = dlsym(RTLD_NEXT,"glDisableVertexAttribArrayARB");
            if(!GL_ENTRY_PTR(glDisableVertexAttribArrayARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableVertexAttribArrayARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableVertexAttribArrayARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableVertexAttribArrayARB_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableVertexAttribArrayARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableVertexAttribArrayARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableVertexAttribArrayARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableVertexAttribArrayARB_Idx),
				 GL_ENTRY_LAST_TS(glDisableVertexAttribArrayARB_Idx));
        if(last_diff > 1000000000){
            printf("glDisableVertexAttribArrayARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArrayARB_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribArrayARB_Idx),
	             GL_ENTRY_CALL_TIME(glDisableVertexAttribArrayARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArrayARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableVertexAttribArrayARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableVertexAttribArrayARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableVertexAttribArrayARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableVertexAttribArrayARB_Idx) = get_ts();
        }


	

}