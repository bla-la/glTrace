#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteSync_wrp						\
    ((void  (*)(GLsync sync                                        \
    ))GL_ENTRY_PTR(glDeleteSync_Idx))


GLAPI void  APIENTRY glDeleteSync(GLsync sync)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteSync_Idx))
	{
            GL_ENTRY_PTR(glDeleteSync_Idx) = dlsym(RTLD_NEXT,"glDeleteSync");
            if(!GL_ENTRY_PTR(glDeleteSync_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteSync_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteSync_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteSync_wrp(sync);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteSync_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteSync_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteSync_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteSync_Idx),
				 GL_ENTRY_LAST_TS(glDeleteSync_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteSync %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteSync_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSync_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSync_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteSync_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteSync_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteSync_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteSync_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteSync_Idx) = get_ts();
        }


	

}