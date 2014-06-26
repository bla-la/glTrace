#include <glTraceCommon.h>
#include <generated.h>

#define glRectxvOES_wrp						\
    ((void  (*)(const GLfixed *v1,const GLfixed *v2                                        \
    ))GL_ENTRY_PTR(glRectxvOES_Idx))


GLAPI void  APIENTRY glRectxvOES(const GLfixed *v1,const GLfixed *v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectxvOES_wrp(v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRectxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectxvOES_Idx),
				 GL_ENTRY_LAST_TS(glRectxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glRectxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glRectxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glRectxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectxvOES_Idx) = get_ts();
        }


	

}