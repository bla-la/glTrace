#include <glTraceCommon.h>
#include <generated.h>

#define glBufferDataARB_wrp						\
    ((void  (*)(GLenum target,GLsizeiptrARB size,const void *data,GLenum usage                                        \
    ))GL_ENTRY_PTR(glBufferDataARB_Idx))


GLAPI void  APIENTRY glBufferDataARB(GLenum target,GLsizeiptrARB size,const void *data,GLenum usage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferDataARB_Idx))
	{
            GL_ENTRY_PTR(glBufferDataARB_Idx) = dlsym(RTLD_NEXT,"glBufferDataARB");
            if(!GL_ENTRY_PTR(glBufferDataARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferDataARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferDataARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferDataARB_wrp(target,size,data,usage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferDataARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferDataARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferDataARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferDataARB_Idx),
				 GL_ENTRY_LAST_TS(glBufferDataARB_Idx));
        if(last_diff > 1000000000){
            printf("glBufferDataARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glBufferDataARB_Idx),
	             GL_ENTRY_CALL_TIME(glBufferDataARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferDataARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferDataARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferDataARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferDataARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferDataARB_Idx) = get_ts();
        }


	

}