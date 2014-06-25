#include <glTraceCommon.h>
#include <generated.h>

#define glTexBufferARB_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glTexBufferARB_Idx))


GLAPI void  APIENTRY glTexBufferARB(GLenum target,GLenum internalformat,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexBufferARB_Idx))
	{
            GL_ENTRY_PTR(glTexBufferARB_Idx) = dlsym(RTLD_NEXT,"glTexBufferARB");
            if(!GL_ENTRY_PTR(glTexBufferARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexBufferARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBufferARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBufferARB_wrp(target,internalformat,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBufferARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBufferARB_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBufferARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBufferARB_Idx),
				 GL_ENTRY_LAST_TS(glTexBufferARB_Idx));
        if(last_diff > 1000000000){
            printf("glTexBufferARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBufferARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBufferARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBufferARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBufferARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBufferARB_Idx) = get_ts();
        }


	

}