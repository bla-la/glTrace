#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2xOES_wrp						\
    ((void  (*)(GLfixed x                                        \
    ))GL_ENTRY_PTR(glVertex2xOES_Idx))


GLAPI void  APIENTRY glVertex2xOES(GLfixed x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2xOES_Idx))
	{
            GL_ENTRY_PTR(glVertex2xOES_Idx) = dlsym(RTLD_NEXT,"glVertex2xOES");
            if(!GL_ENTRY_PTR(glVertex2xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2xOES_wrp(x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2xOES_Idx),
				 GL_ENTRY_LAST_TS(glVertex2xOES_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2xOES_Idx) = get_ts();
        }


	

}