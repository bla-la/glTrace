#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementArrayAPPLE_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawElementArrayAPPLE_Idx))


GLAPI void  APIENTRY glDrawElementArrayAPPLE(GLenum mode,GLint first,GLsizei count)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawElementArrayAPPLE_Idx))
	{
            GL_ENTRY_PTR(glDrawElementArrayAPPLE_Idx) = dlsym(RTLD_NEXT,"glDrawElementArrayAPPLE");
            if(!GL_ENTRY_PTR(glDrawElementArrayAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawElementArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementArrayAPPLE_wrp(mode,first,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementArrayAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glDrawElementArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementArrayAPPLE_Idx) = get_ts();
        }


	

}