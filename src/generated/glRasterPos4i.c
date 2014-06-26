#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4i_wrp						\
    ((void  (*)(GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glRasterPos4i_Idx))


GLAPI void  APIENTRY glRasterPos4i(GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRasterPos4i_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4i_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4i_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4i_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4i_Idx));


        if(last_diff > 1000000000){
            printf("glRasterPos4i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4i_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4i_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4i_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4i_Idx) = get_ts();
        }


	

}