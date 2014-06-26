#include <glTraceCommon.h>
#include <generated.h>

#define glMapGrid2xOES_wrp						\
    ((void  (*)(GLint n,GLfixed u1,GLfixed u2,GLfixed v1,GLfixed v2                                        \
    ))GL_ENTRY_PTR(glMapGrid2xOES_Idx))


GLAPI void  APIENTRY glMapGrid2xOES(GLint n,GLfixed u1,GLfixed u2,GLfixed v1,GLfixed v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapGrid2xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapGrid2xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMapGrid2xOES_wrp(n,u1,u2,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapGrid2xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapGrid2xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMapGrid2xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapGrid2xOES_Idx),
				 GL_ENTRY_LAST_TS(glMapGrid2xOES_Idx));


        if(last_diff > 1000000000){
            printf("glMapGrid2xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapGrid2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapGrid2xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapGrid2xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapGrid2xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapGrid2xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapGrid2xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapGrid2xOES_Idx) = get_ts();
        }


	

}