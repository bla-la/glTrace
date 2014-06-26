#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementArrayATI_wrp						\
    ((void  (*)(GLenum mode,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawElementArrayATI_Idx))


GLAPI void  APIENTRY glDrawElementArrayATI(GLenum mode,GLsizei count)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementArrayATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementArrayATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementArrayATI_wrp(mode,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementArrayATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementArrayATI_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementArrayATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementArrayATI_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementArrayATI_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementArrayATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementArrayATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementArrayATI_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementArrayATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementArrayATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementArrayATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementArrayATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementArrayATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementArrayATI_Idx) = get_ts();
        }


	

}