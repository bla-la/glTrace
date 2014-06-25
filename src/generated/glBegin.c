#include <glTraceCommon.h>
#include <generated.h>

#define glBegin_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glBegin_Idx))


GLAPI void  APIENTRY glBegin(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBegin_Idx))
	{
            GL_ENTRY_PTR(glBegin_Idx) = dlsym(RTLD_NEXT,"glBegin");
            if(!GL_ENTRY_PTR(glBegin_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBegin_Idx))
    	{
            GL_ENTRY_PREV_TS(glBegin_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBegin_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBegin_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBegin_Idx) ++;

        GL_ENTRY_LAST_TS(glBegin_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBegin_Idx),
				 GL_ENTRY_LAST_TS(glBegin_Idx));
        if(last_diff > 1000000000){
            printf("glBegin %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBegin_Idx),
	             GL_ENTRY_CALL_TIME(glBegin_Idx),
	             GL_ENTRY_CALL_TIME(glBegin_Idx) /
	             GL_ENTRY_CALL_COUNT(glBegin_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBegin_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBegin_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBegin_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBegin_Idx) = get_ts();
        }


	

}