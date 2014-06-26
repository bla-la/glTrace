#include <glTraceCommon.h>
#include <generated.h>

#define glDrawRangeElementArrayAPPLE_wrp						\
    ((void  (*)(GLenum mode,GLuint start,GLuint end,GLint first,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawRangeElementArrayAPPLE_Idx))


GLAPI void  APIENTRY glDrawRangeElementArrayAPPLE(GLenum mode,GLuint start,GLuint end,GLint first,GLsizei count)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawRangeElementArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawRangeElementArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawRangeElementArrayAPPLE_wrp(mode,start,end,first,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawRangeElementArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawRangeElementArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawRangeElementArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDrawRangeElementArrayAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glDrawRangeElementArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawRangeElementArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawRangeElementArrayAPPLE_Idx) = get_ts();
        }


	

}