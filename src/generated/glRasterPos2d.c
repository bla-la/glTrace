#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos2d_wrp						\
    ((void  (*)(GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glRasterPos2d_Idx))


GLAPI void  APIENTRY glRasterPos2d(GLdouble x,GLdouble y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRasterPos2d_Idx))
	{
            GL_ENTRY_PTR(glRasterPos2d_Idx) = dlsym(RTLD_NEXT,"glRasterPos2d");
            if(!GL_ENTRY_PTR(glRasterPos2d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRasterPos2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos2d_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos2d_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos2d_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos2d_Idx));
        if(last_diff > 1000000000){
            printf("glRasterPos2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos2d_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos2d_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos2d_Idx) = get_ts();
        }


	

}