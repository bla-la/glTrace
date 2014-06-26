#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribDivisorARB_wrp						\
    ((void  (*)(GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexAttribDivisorARB_Idx))


GLAPI void  APIENTRY glVertexAttribDivisorARB(GLuint index,GLuint divisor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribDivisorARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribDivisorARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribDivisorARB_wrp(index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribDivisorARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribDivisorARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribDivisorARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribDivisorARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribDivisorARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribDivisorARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribDivisorARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribDivisorARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribDivisorARB_Idx) = get_ts();
        }


	

}