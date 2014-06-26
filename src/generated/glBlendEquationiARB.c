#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationiARB_wrp						\
    ((void  (*)(GLuint buf,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquationiARB_Idx))


GLAPI void  APIENTRY glBlendEquationiARB(GLuint buf,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationiARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationiARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationiARB_wrp(buf,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationiARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationiARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationiARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationiARB_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationiARB_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationiARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationiARB_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationiARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationiARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationiARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationiARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationiARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationiARB_Idx) = get_ts();
        }


	

}