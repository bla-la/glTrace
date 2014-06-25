#include <glTraceCommon.h>
#include <generated.h>

#define glPixelZoomxOES_wrp						\
    ((void  (*)(GLfixed xfactor,GLfixed yfactor                                        \
    ))GL_ENTRY_PTR(glPixelZoomxOES_Idx))


GLAPI void  APIENTRY glPixelZoomxOES(GLfixed xfactor,GLfixed yfactor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelZoomxOES_Idx))
	{
            GL_ENTRY_PTR(glPixelZoomxOES_Idx) = dlsym(RTLD_NEXT,"glPixelZoomxOES");
            if(!GL_ENTRY_PTR(glPixelZoomxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelZoomxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelZoomxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelZoomxOES_wrp(xfactor,yfactor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelZoomxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelZoomxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelZoomxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelZoomxOES_Idx),
				 GL_ENTRY_LAST_TS(glPixelZoomxOES_Idx));
        if(last_diff > 1000000000){
            printf("glPixelZoomxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelZoomxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPixelZoomxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPixelZoomxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelZoomxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelZoomxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelZoomxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelZoomxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelZoomxOES_Idx) = get_ts();
        }


	

}