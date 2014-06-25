#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementArrayAPPLE_wrp						\
    ((void  (*)(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementArrayAPPLE_Idx))


GLAPI void  APIENTRY glMultiDrawElementArrayAPPLE(GLenum mode,const GLint *first,const GLsizei *count,GLsizei primcount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiDrawElementArrayAPPLE_Idx))
	{
            GL_ENTRY_PTR(glMultiDrawElementArrayAPPLE_Idx) = dlsym(RTLD_NEXT,"glMultiDrawElementArrayAPPLE");
            if(!GL_ENTRY_PTR(glMultiDrawElementArrayAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiDrawElementArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementArrayAPPLE_wrp(mode,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementArrayAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glMultiDrawElementArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementArrayAPPLE_Idx) = get_ts();
        }


	

}