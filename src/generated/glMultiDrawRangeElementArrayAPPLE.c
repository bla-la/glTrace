#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawRangeElementArrayAPPLE_wrp						\
    ((void  (*)(GLenum mode,GLuint start,GLuint end,const GLint *first,const GLsizei *count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawRangeElementArrayAPPLE_Idx))


GLAPI void  APIENTRY glMultiDrawRangeElementArrayAPPLE(GLenum mode,GLuint start,GLuint end,const GLint *first,const GLsizei *count,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawRangeElementArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawRangeElementArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawRangeElementArrayAPPLE_wrp(mode,start,end,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawRangeElementArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawRangeElementArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawRangeElementArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawRangeElementArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawRangeElementArrayAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawRangeElementArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawRangeElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawRangeElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawRangeElementArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawRangeElementArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawRangeElementArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawRangeElementArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawRangeElementArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawRangeElementArrayAPPLE_Idx) = get_ts();
        }


	

}