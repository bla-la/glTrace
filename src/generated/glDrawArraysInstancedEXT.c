#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstancedEXT_wrp						\
    ((void  (*)(GLenum mode,GLint start,GLsizei count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstancedEXT_Idx))


GLAPI void  APIENTRY glDrawArraysInstancedEXT(GLenum mode,GLint start,GLsizei count,GLsizei primcount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawArraysInstancedEXT_Idx))
	{
            GL_ENTRY_PTR(glDrawArraysInstancedEXT_Idx) = dlsym(RTLD_NEXT,"glDrawArraysInstancedEXT");
            if(!GL_ENTRY_PTR(glDrawArraysInstancedEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawArraysInstancedEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstancedEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstancedEXT_wrp(mode,start,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstancedEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstancedEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstancedEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstancedEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstancedEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDrawArraysInstancedEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstancedEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstancedEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstancedEXT_Idx) = get_ts();
        }


	

}