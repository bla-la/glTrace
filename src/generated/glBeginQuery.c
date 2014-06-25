#include <glTraceCommon.h>
#include <generated.h>

#define glBeginQuery_wrp						\
    ((void  (*)(GLenum target,GLuint id                                        \
    ))GL_ENTRY_PTR(glBeginQuery_Idx))


GLAPI void  APIENTRY glBeginQuery(GLenum target,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginQuery_Idx))
	{
            GL_ENTRY_PTR(glBeginQuery_Idx) = dlsym(RTLD_NEXT,"glBeginQuery");
            if(!GL_ENTRY_PTR(glBeginQuery_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginQuery_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginQuery_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginQuery_wrp(target,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginQuery_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginQuery_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginQuery_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginQuery_Idx),
				 GL_ENTRY_LAST_TS(glBeginQuery_Idx));
        if(last_diff > 1000000000){
            printf("glBeginQuery %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginQuery_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQuery_Idx),
	             GL_ENTRY_CALL_TIME(glBeginQuery_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginQuery_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginQuery_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginQuery_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginQuery_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginQuery_Idx) = get_ts();
        }


	

}