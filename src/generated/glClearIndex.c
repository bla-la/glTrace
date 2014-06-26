#include <glTraceCommon.h>
#include <generated.h>

#define glClearIndex_wrp						\
    ((void  (*)(GLfloat c                                        \
    ))GL_ENTRY_PTR(glClearIndex_Idx))


GLAPI void  APIENTRY glClearIndex(GLfloat c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearIndex_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glClearIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearIndex_Idx),
				 GL_ENTRY_LAST_TS(glClearIndex_Idx));


        if(last_diff > 1000000000){
            printf("glClearIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearIndex_Idx),
	             GL_ENTRY_CALL_TIME(glClearIndex_Idx),
	             GL_ENTRY_CALL_TIME(glClearIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearIndex_Idx) = get_ts();
        }


	

}