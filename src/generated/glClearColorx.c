#include <glTraceCommon.h>
#include <generated.h>

#define glClearColorx_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glClearColorx_Idx))


GLAPI void  APIENTRY glClearColorx(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearColorx_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearColorx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearColorx_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearColorx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearColorx_Idx) ++;

        GL_ENTRY_LAST_TS(glClearColorx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearColorx_Idx),
				 GL_ENTRY_LAST_TS(glClearColorx_Idx));


        if(last_diff > 1000000000){
            printf("glClearColorx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearColorx_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorx_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorx_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearColorx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearColorx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearColorx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearColorx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearColorx_Idx) = get_ts();
        }


	

}