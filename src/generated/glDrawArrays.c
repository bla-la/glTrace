#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArrays_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count                                        \
    ))GL_ENTRY_PTR(glDrawArrays_Idx))


GLAPI void  APIENTRY glDrawArrays(GLenum mode,GLint first,GLsizei count)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawArrays_Idx))
	{
            GL_ENTRY_PTR(glDrawArrays_Idx) = dlsym(RTLD_NEXT,"glDrawArrays");
            if(!GL_ENTRY_PTR(glDrawArrays_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawArrays_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArrays_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArrays_wrp(mode,first,count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArrays_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArrays_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArrays_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArrays_Idx),
				 GL_ENTRY_LAST_TS(glDrawArrays_Idx));
        if(last_diff > 1000000000){
            printf("glDrawArrays %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArrays_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArrays_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArrays_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArrays_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArrays_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArrays_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArrays_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArrays_Idx) = get_ts();
        }


	

}