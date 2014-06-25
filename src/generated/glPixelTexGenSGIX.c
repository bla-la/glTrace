#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTexGenSGIX_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glPixelTexGenSGIX_Idx))


GLAPI void  APIENTRY glPixelTexGenSGIX(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTexGenSGIX_Idx))
	{
            GL_ENTRY_PTR(glPixelTexGenSGIX_Idx) = dlsym(RTLD_NEXT,"glPixelTexGenSGIX");
            if(!GL_ENTRY_PTR(glPixelTexGenSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTexGenSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTexGenSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTexGenSGIX_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTexGenSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTexGenSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTexGenSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTexGenSGIX_Idx),
				 GL_ENTRY_LAST_TS(glPixelTexGenSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTexGenSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTexGenSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTexGenSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTexGenSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTexGenSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTexGenSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTexGenSGIX_Idx) = get_ts();
        }


	

}