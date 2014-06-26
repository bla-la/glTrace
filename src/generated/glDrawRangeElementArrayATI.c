#include <glTraceCommon.h>
#include <generated.h>

#define glDrawRangeElementArrayATI_wrp						\
    ((void  (*)(GLenum mode,GLuint start,GLuint end,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawRangeElementArrayATI_Idx))


GLAPI void  APIENTRY glDrawRangeElementArrayATI(GLenum mode,GLuint start,GLuint end,GLsizei count)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawRangeElementArrayATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawRangeElementArrayATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawRangeElementArrayATI_wrp(mode,start,end,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawRangeElementArrayATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayATI_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawRangeElementArrayATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawRangeElementArrayATI_Idx),
				 GL_ENTRY_LAST_TS(glDrawRangeElementArrayATI_Idx));


        if(last_diff > 1000000000){
            printf("glDrawRangeElementArrayATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawRangeElementArrayATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawRangeElementArrayATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawRangeElementArrayATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawRangeElementArrayATI_Idx) = get_ts();
        }


	

}