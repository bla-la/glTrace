#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4d_wrp						\
    ((void  (*)(GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glRasterPos4d_Idx))


GLAPI void  APIENTRY glRasterPos4d(GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRasterPos4d_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4d_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4d_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4d_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4d_Idx));


        if(last_diff > 1000000000){
            printf("glRasterPos4d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4d_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4d_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4d_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4d_Idx) = get_ts();
        }


	

}