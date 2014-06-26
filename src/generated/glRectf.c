#include <glTraceCommon.h>
#include <generated.h>

#define glRectf_wrp						\
    ((void  (*)(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2                                        \
    ))GL_ENTRY_PTR(glRectf_Idx))


GLAPI void  APIENTRY glRectf(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectf_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectf_wrp(x1,y1,x2,y2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectf_Idx) ++;

        GL_ENTRY_LAST_TS(glRectf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectf_Idx),
				 GL_ENTRY_LAST_TS(glRectf_Idx));


        if(last_diff > 1000000000){
            printf("glRectf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectf_Idx),
	             GL_ENTRY_CALL_TIME(glRectf_Idx),
	             GL_ENTRY_CALL_TIME(glRectf_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectf_Idx) = get_ts();
        }


	

}