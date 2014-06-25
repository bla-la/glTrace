#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4xvOES_wrp						\
    ((void  (*)(const GLfixed *coords                                        \
    ))GL_ENTRY_PTR(glVertex4xvOES_Idx))


GLAPI void  APIENTRY glVertex4xvOES(const GLfixed *coords)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex4xvOES_Idx))
	{
            GL_ENTRY_PTR(glVertex4xvOES_Idx) = dlsym(RTLD_NEXT,"glVertex4xvOES");
            if(!GL_ENTRY_PTR(glVertex4xvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex4xvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4xvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4xvOES_wrp(coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4xvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4xvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4xvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4xvOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex4xvOES_Idx));
        if(last_diff > 1000000000){
            printf("glVertex4xvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4xvOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4xvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4xvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4xvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4xvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4xvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4xvOES_Idx) = get_ts();
        }


	

}