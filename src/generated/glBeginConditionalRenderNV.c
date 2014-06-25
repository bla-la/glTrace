#include <glTraceCommon.h>
#include <generated.h>

#define glBeginConditionalRenderNV_wrp						\
    ((void  (*)(GLuint id,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBeginConditionalRenderNV_Idx))


GLAPI void  APIENTRY glBeginConditionalRenderNV(GLuint id,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginConditionalRenderNV_Idx))
	{
            GL_ENTRY_PTR(glBeginConditionalRenderNV_Idx) = dlsym(RTLD_NEXT,"glBeginConditionalRenderNV");
            if(!GL_ENTRY_PTR(glBeginConditionalRenderNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginConditionalRenderNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginConditionalRenderNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginConditionalRenderNV_wrp(id,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginConditionalRenderNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginConditionalRenderNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginConditionalRenderNV_Idx),
				 GL_ENTRY_LAST_TS(glBeginConditionalRenderNV_Idx));
        if(last_diff > 1000000000){
            printf("glBeginConditionalRenderNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginConditionalRenderNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginConditionalRenderNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginConditionalRenderNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginConditionalRenderNV_Idx) = get_ts();
        }


	

}