#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferPointervOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetBufferPointervOES_Idx))


GLAPI void  APIENTRY glGetBufferPointervOES(GLenum target,GLenum pname,void **params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetBufferPointervOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferPointervOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferPointervOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferPointervOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferPointervOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferPointervOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferPointervOES_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferPointervOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetBufferPointervOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferPointervOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointervOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointervOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferPointervOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferPointervOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferPointervOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferPointervOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferPointervOES_Idx) = get_ts();
        }


	

}