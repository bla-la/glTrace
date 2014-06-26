#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffers_wrp						\
    ((void  (*)(GLsizei n,const GLenum *bufs                                        \
    ))GL_ENTRY_PTR(glDrawBuffers_Idx))


GLAPI void  APIENTRY glDrawBuffers(GLsizei n,const GLenum *bufs)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawBuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffers_wrp(n,bufs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffers_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffers_Idx));


        if(last_diff > 1000000000){
            printf("glDrawBuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffers_Idx) = get_ts();
        }


	

}