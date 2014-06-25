#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstanced_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei instancecount                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstanced_Idx))


GLAPI void  APIENTRY glDrawArraysInstanced(GLenum mode,GLint first,GLsizei count,GLsizei instancecount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawArraysInstanced_Idx))
	{
            GL_ENTRY_PTR(glDrawArraysInstanced_Idx) = dlsym(RTLD_NEXT,"glDrawArraysInstanced");
            if(!GL_ENTRY_PTR(glDrawArraysInstanced_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawArraysInstanced_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstanced_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstanced_wrp(mode,first,count,instancecount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstanced_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstanced_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstanced_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstanced_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstanced_Idx));
        if(last_diff > 1000000000){
            printf("glDrawArraysInstanced %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstanced_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstanced_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstanced_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstanced_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstanced_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstanced_Idx) = get_ts();
        }


	

}