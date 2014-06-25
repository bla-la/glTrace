#include <glTraceCommon.h>
#include <generated.h>

#define glActiveTextureARB_wrp						\
    ((void  (*)(GLenum texture                                        \
    ))GL_ENTRY_PTR(glActiveTextureARB_Idx))


GLAPI void  APIENTRY glActiveTextureARB(GLenum texture)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glActiveTextureARB_Idx))
	{
            GL_ENTRY_PTR(glActiveTextureARB_Idx) = dlsym(RTLD_NEXT,"glActiveTextureARB");
            if(!GL_ENTRY_PTR(glActiveTextureARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glActiveTextureARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveTextureARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveTextureARB_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveTextureARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveTextureARB_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveTextureARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveTextureARB_Idx),
				 GL_ENTRY_LAST_TS(glActiveTextureARB_Idx));
        if(last_diff > 1000000000){
            printf("glActiveTextureARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glActiveTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glActiveTextureARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveTextureARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveTextureARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveTextureARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveTextureARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveTextureARB_Idx) = get_ts();
        }


	

}