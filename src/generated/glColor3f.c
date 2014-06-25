#include <glTraceCommon.h>
#include <generated.h>

#define glColor3f_wrp						\
    ((void  (*)(GLfloat red,GLfloat green,GLfloat blue                                        \
    ))GL_ENTRY_PTR(glColor3f_Idx))


GLAPI void  APIENTRY glColor3f(GLfloat red,GLfloat green,GLfloat blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3f_Idx))
	{
            GL_ENTRY_PTR(glColor3f_Idx) = dlsym(RTLD_NEXT,"glColor3f");
            if(!GL_ENTRY_PTR(glColor3f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3f_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3f_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3f_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3f_Idx),
				 GL_ENTRY_LAST_TS(glColor3f_Idx));
        if(last_diff > 1000000000){
            printf("glColor3f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3f_Idx),
	             GL_ENTRY_CALL_TIME(glColor3f_Idx),
	             GL_ENTRY_CALL_TIME(glColor3f_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3f_Idx) = get_ts();
        }


	

}