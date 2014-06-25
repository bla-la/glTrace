#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4xOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z,GLfixed w                                        \
    ))GL_ENTRY_PTR(glRasterPos4xOES_Idx))


GLAPI void  APIENTRY glRasterPos4xOES(GLfixed x,GLfixed y,GLfixed z,GLfixed w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRasterPos4xOES_Idx))
	{
            GL_ENTRY_PTR(glRasterPos4xOES_Idx) = dlsym(RTLD_NEXT,"glRasterPos4xOES");
            if(!GL_ENTRY_PTR(glRasterPos4xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRasterPos4xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4xOES_wrp(x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4xOES_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4xOES_Idx));
        if(last_diff > 1000000000){
            printf("glRasterPos4xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4xOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4xOES_Idx) = get_ts();
        }


	

}