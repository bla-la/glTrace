#include <glTraceCommon.h>
#include <generated.h>

#define glClearColorxOES_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha                                        \
    ))GL_ENTRY_PTR(glClearColorxOES_Idx))


GLAPI void  APIENTRY glClearColorxOES(GLfixed red,GLfixed green,GLfixed blue,GLfixed alpha)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearColorxOES_Idx))
	{
            GL_ENTRY_PTR(glClearColorxOES_Idx) = dlsym(RTLD_NEXT,"glClearColorxOES");
            if(!GL_ENTRY_PTR(glClearColorxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearColorxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearColorxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearColorxOES_wrp(red,green,blue,alpha);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearColorxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearColorxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClearColorxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearColorxOES_Idx),
				 GL_ENTRY_LAST_TS(glClearColorxOES_Idx));
        if(last_diff > 1000000000){
            printf("glClearColorxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearColorxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearColorxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearColorxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearColorxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearColorxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearColorxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearColorxOES_Idx) = get_ts();
        }


	

}