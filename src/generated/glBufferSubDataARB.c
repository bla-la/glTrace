#include <glTraceCommon.h>
#include <generated.h>

#define glBufferSubDataARB_wrp						\
    ((void  (*)(GLenum target,GLintptrARB offset,GLsizeiptrARB size,const void *data                                        \
    ))GL_ENTRY_PTR(glBufferSubDataARB_Idx))


GLAPI void  APIENTRY glBufferSubDataARB(GLenum target,GLintptrARB offset,GLsizeiptrARB size,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBufferSubDataARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferSubDataARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferSubDataARB_wrp(target,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferSubDataARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferSubDataARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferSubDataARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferSubDataARB_Idx),
				 GL_ENTRY_LAST_TS(glBufferSubDataARB_Idx));


        if(last_diff > 1000000000){
            printf("glBufferSubDataARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferSubDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glBufferSubDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glBufferSubDataARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferSubDataARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferSubDataARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferSubDataARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferSubDataARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferSubDataARB_Idx) = get_ts();
        }


	

}