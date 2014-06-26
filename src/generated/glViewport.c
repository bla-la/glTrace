#include <glTraceCommon.h>
#include <generated.h>

#define glViewport_wrp						\
    ((void  (*)(GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glViewport_Idx))


GLAPI void  APIENTRY glViewport(GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glViewport_Idx))
    	{
            GL_ENTRY_PREV_TS(glViewport_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glViewport_wrp(x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glViewport_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glViewport_Idx) ++;

        GL_ENTRY_LAST_TS(glViewport_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glViewport_Idx),
				 GL_ENTRY_LAST_TS(glViewport_Idx));


        if(last_diff > 1000000000){
            printf("glViewport %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glViewport_Idx),
	             GL_ENTRY_CALL_TIME(glViewport_Idx),
	             GL_ENTRY_CALL_TIME(glViewport_Idx) /
	             GL_ENTRY_CALL_COUNT(glViewport_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glViewport_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glViewport_Idx) = 0;
             GL_ENTRY_CALL_TIME(glViewport_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glViewport_Idx) = get_ts();
        }


	

}