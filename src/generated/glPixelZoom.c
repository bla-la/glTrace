#include <glTraceCommon.h>
#include <generated.h>

#define glPixelZoom_wrp						\
    ((void  (*)(GLfloat xfactor,GLfloat yfactor                                        \
    ))GL_ENTRY_PTR(glPixelZoom_Idx))


GLAPI void  APIENTRY glPixelZoom(GLfloat xfactor,GLfloat yfactor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelZoom_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelZoom_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelZoom_wrp(xfactor,yfactor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelZoom_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelZoom_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelZoom_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelZoom_Idx),
				 GL_ENTRY_LAST_TS(glPixelZoom_Idx));


        if(last_diff > 1000000000){
            printf("glPixelZoom %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelZoom_Idx),
	             GL_ENTRY_CALL_TIME(glPixelZoom_Idx),
	             GL_ENTRY_CALL_TIME(glPixelZoom_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelZoom_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelZoom_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelZoom_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelZoom_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelZoom_Idx) = get_ts();
        }


	

}