#include <glTraceCommon.h>
#include <generated.h>

#define glColor3xOES_wrp						\
    ((void  (*)(GLfixed red,GLfixed green,GLfixed blue                                        \
    ))GL_ENTRY_PTR(glColor3xOES_Idx))


GLAPI void  APIENTRY glColor3xOES(GLfixed red,GLfixed green,GLfixed blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3xOES_Idx))
	{
            GL_ENTRY_PTR(glColor3xOES_Idx) = dlsym(RTLD_NEXT,"glColor3xOES");
            if(!GL_ENTRY_PTR(glColor3xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3xOES_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3xOES_Idx),
				 GL_ENTRY_LAST_TS(glColor3xOES_Idx));
        if(last_diff > 1000000000){
            printf("glColor3xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor3xOES_Idx),
	             GL_ENTRY_CALL_TIME(glColor3xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3xOES_Idx) = get_ts();
        }


	

}