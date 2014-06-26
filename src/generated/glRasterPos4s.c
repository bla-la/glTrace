#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4s_wrp						\
    ((void  (*)(GLshort x,GLshort y,GLshort z,GLshort w                                        \
    ))GL_ENTRY_PTR(glRasterPos4s_Idx))


GLAPI void  APIENTRY glRasterPos4s(GLshort x,GLshort y,GLshort z,GLshort w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRasterPos4s_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4s_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4s_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4s_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4s_Idx));


        if(last_diff > 1000000000){
            printf("glRasterPos4s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4s_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4s_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4s_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4s_Idx) = get_ts();
        }


	

}