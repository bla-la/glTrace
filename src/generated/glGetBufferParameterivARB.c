#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferParameterivARB_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetBufferParameterivARB_Idx))


GLAPI void  APIENTRY glGetBufferParameterivARB(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetBufferParameterivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferParameterivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferParameterivARB_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferParameterivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferParameterivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferParameterivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferParameterivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferParameterivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetBufferParameterivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferParameterivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameterivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameterivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferParameterivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferParameterivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferParameterivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferParameterivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferParameterivARB_Idx) = get_ts();
        }


	

}