#include <glTraceCommon.h>
#include <generated.h>

#define glBeginPerfQueryINTEL_wrp						\
    ((void  (*)(GLuint queryHandle                                        \
    ))GL_ENTRY_PTR(glBeginPerfQueryINTEL_Idx))


GLAPI void  APIENTRY glBeginPerfQueryINTEL(GLuint queryHandle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginPerfQueryINTEL_Idx))
	{
            GL_ENTRY_PTR(glBeginPerfQueryINTEL_Idx) = dlsym(RTLD_NEXT,"glBeginPerfQueryINTEL");
            if(!GL_ENTRY_PTR(glBeginPerfQueryINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginPerfQueryINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginPerfQueryINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginPerfQueryINTEL_wrp(queryHandle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginPerfQueryINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginPerfQueryINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginPerfQueryINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginPerfQueryINTEL_Idx),
				 GL_ENTRY_LAST_TS(glBeginPerfQueryINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glBeginPerfQueryINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginPerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glBeginPerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glBeginPerfQueryINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginPerfQueryINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginPerfQueryINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginPerfQueryINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginPerfQueryINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginPerfQueryINTEL_Idx) = get_ts();
        }


	

}