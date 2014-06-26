#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos3fv_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glRasterPos3fv_Idx))


GLAPI void  APIENTRY glRasterPos3fv(const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRasterPos3fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos3fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos3fv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos3fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos3fv_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos3fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos3fv_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos3fv_Idx));


        if(last_diff > 1000000000){
            printf("glRasterPos3fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos3fv_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos3fv_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos3fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos3fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos3fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos3fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos3fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos3fv_Idx) = get_ts();
        }


	

}