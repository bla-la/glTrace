#include <glTraceCommon.h>
#include <generated.h>

#define glClearAccumxOES_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glClearAccumxOES_Idx))


GLAPI void  APIENTRY glClearAccumxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearAccumxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearAccumxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearAccumxOES_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearAccumxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearAccumxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClearAccumxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearAccumxOES_Idx),
				 GL_ENTRY_LAST_TS(glClearAccumxOES_Idx));


        if(last_diff > 1000000000){
            printf("glClearAccumxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearAccumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearAccumxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearAccumxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearAccumxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearAccumxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearAccumxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearAccumxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearAccumxOES_Idx) = get_ts();
        }


	

}