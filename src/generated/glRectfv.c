#include <glTraceCommon.h>
#include <generated.h>

#define glRectfv_wrp						\
    ((void  (*)(const GLfloat *v1,const GLfloat *v2                                        \
    ))GL_ENTRY_PTR(glRectfv_Idx))


GLAPI void  APIENTRY glRectfv(const GLfloat *v1,const GLfloat *v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectfv_wrp(v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectfv_Idx) ++;

        GL_ENTRY_LAST_TS(glRectfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectfv_Idx),
				 GL_ENTRY_LAST_TS(glRectfv_Idx));


        if(last_diff > 1000000000){
            printf("glRectfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectfv_Idx),
	             GL_ENTRY_CALL_TIME(glRectfv_Idx),
	             GL_ENTRY_CALL_TIME(glRectfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectfv_Idx) = get_ts();
        }


	

}