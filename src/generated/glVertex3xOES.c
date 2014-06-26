#include <glTraceCommon.h>
#include <generated.h>

#define glVertex3xOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y                                        \
    ))GL_ENTRY_PTR(glVertex3xOES_Idx))


GLAPI void  APIENTRY glVertex3xOES(GLfixed x,GLfixed y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertex3xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex3xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex3xOES_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex3xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex3xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex3xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex3xOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex3xOES_Idx));


        if(last_diff > 1000000000){
            printf("glVertex3xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex3xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex3xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex3xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex3xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex3xOES_Idx) = get_ts();
        }


	

}