#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2f_wrp						\
    ((void  (*)(GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glVertex2f_Idx))


GLAPI void  APIENTRY glVertex2f(GLfloat x,GLfloat y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2f_Idx))
	{
            GL_ENTRY_PTR(glVertex2f_Idx) = dlsym(RTLD_NEXT,"glVertex2f");
            if(!GL_ENTRY_PTR(glVertex2f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2f_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2f_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2f_Idx),
				 GL_ENTRY_LAST_TS(glVertex2f_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2f_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2f_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2f_Idx) = get_ts();
        }


	

}