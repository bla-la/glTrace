#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferARB_wrp						\
    ((void  (*)(GLenum target,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glBindBufferARB_Idx))


GLAPI void  APIENTRY glBindBufferARB(GLenum target,GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindBufferARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferARB_wrp(target,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferARB_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferARB_Idx));


        if(last_diff > 1000000000){
            printf("glBindBufferARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferARB_Idx) = get_ts();
        }


	

}