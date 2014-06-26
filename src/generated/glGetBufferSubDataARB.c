#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferSubDataARB_wrp						\
    ((void  (*)(GLenum target,GLintptrARB offset,GLsizeiptrARB size,void *data                                        \
    ))GL_ENTRY_PTR(glGetBufferSubDataARB_Idx))


GLAPI void  APIENTRY glGetBufferSubDataARB(GLenum target,GLintptrARB offset,GLsizeiptrARB size,void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetBufferSubDataARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferSubDataARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferSubDataARB_wrp(target,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferSubDataARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferSubDataARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferSubDataARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferSubDataARB_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferSubDataARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetBufferSubDataARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferSubDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferSubDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferSubDataARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferSubDataARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferSubDataARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferSubDataARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferSubDataARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferSubDataARB_Idx) = get_ts();
        }


	

}