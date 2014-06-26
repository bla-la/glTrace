#include <glTraceCommon.h>
#include <generated.h>

#define glBeginConditionalRender_wrp						\
    ((void  (*)(GLuint id,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBeginConditionalRender_Idx))


GLAPI void  APIENTRY glBeginConditionalRender(GLuint id,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBeginConditionalRender_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginConditionalRender_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginConditionalRender_wrp(id,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginConditionalRender_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginConditionalRender_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginConditionalRender_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginConditionalRender_Idx),
				 GL_ENTRY_LAST_TS(glBeginConditionalRender_Idx));


        if(last_diff > 1000000000){
            printf("glBeginConditionalRender %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRender_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRender_Idx),
	             GL_ENTRY_CALL_TIME(glBeginConditionalRender_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginConditionalRender_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginConditionalRender_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginConditionalRender_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginConditionalRender_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginConditionalRender_Idx) = get_ts();
        }


	

}