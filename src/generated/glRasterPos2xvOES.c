#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos2xvOES_wrp						\
    ((void  (*)(const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glRasterPos2xvOES_Idx))


GLAPI void  APIENTRY glRasterPos2xvOES(const GLfixed *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRasterPos2xvOES_Idx))
	{
            GL_ENTRY_PTR(glRasterPos2xvOES_Idx) = dlsym(RTLD_NEXT,"glRasterPos2xvOES");
            if(!GL_ENTRY_PTR(glRasterPos2xvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRasterPos2xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos2xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos2xvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos2xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos2xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos2xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos2xvOES_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos2xvOES_Idx));
        if(last_diff > 1000000000){
            printf("glRasterPos2xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos2xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos2xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos2xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos2xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos2xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos2xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos2xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos2xvOES_Idx) = get_ts();
        }


	

}