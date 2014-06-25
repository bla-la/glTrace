#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos3xOES_wrp						\
    ((void  (*)(GLfixed x,GLfixed y,GLfixed z                                        \
    ))GL_ENTRY_PTR(glRasterPos3xOES_Idx))


GLAPI void  APIENTRY glRasterPos3xOES(GLfixed x,GLfixed y,GLfixed z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRasterPos3xOES_Idx))
	{
            GL_ENTRY_PTR(glRasterPos3xOES_Idx) = dlsym(RTLD_NEXT,"glRasterPos3xOES");
            if(!GL_ENTRY_PTR(glRasterPos3xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRasterPos3xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos3xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos3xOES_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos3xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos3xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos3xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos3xOES_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos3xOES_Idx));
        if(last_diff > 1000000000){
            printf("glRasterPos3xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos3xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos3xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos3xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos3xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos3xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos3xOES_Idx) = get_ts();
        }


	

}