#include <glTraceCommon.h>
#include <generated.h>

#define glBeginConditionalRenderNVX_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glBeginConditionalRenderNVX_Idx))


GLAPI void  APIENTRY glBeginConditionalRenderNVX(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginConditionalRenderNVX_Idx))
	{
            GL_ENTRY_PTR(glBeginConditionalRenderNVX_Idx) = dlsym(RTLD_NEXT,"glBeginConditionalRenderNVX");
            if(!GL_ENTRY_PTR(glBeginConditionalRenderNVX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginConditionalRenderNVX_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginConditionalRenderNVX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginConditionalRenderNVX_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginConditionalRenderNVX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNVX_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginConditionalRenderNVX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginConditionalRenderNVX_Idx),
				 GL_ENTRY_LAST_TS(glBeginConditionalRenderNVX_Idx));
        if(last_diff > 1000000000){
            printf("glBeginConditionalRenderNVX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNVX_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNVX_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNVX_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNVX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginConditionalRenderNVX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNVX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNVX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginConditionalRenderNVX_Idx) = get_ts();
        }


	

}