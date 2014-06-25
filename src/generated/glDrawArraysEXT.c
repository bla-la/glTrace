#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysEXT_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawArraysEXT_Idx))


GLAPI void  APIENTRY glDrawArraysEXT(GLenum mode,GLint first,GLsizei count)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawArraysEXT_Idx))
	{
            GL_ENTRY_PTR(glDrawArraysEXT_Idx) = dlsym(RTLD_NEXT,"glDrawArraysEXT");
            if(!GL_ENTRY_PTR(glDrawArraysEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawArraysEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysEXT_wrp(mode,first,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysEXT_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDrawArraysEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysEXT_Idx) = get_ts();
        }


	

}