#include <glTraceCommon.h>
#include <generated.h>

#define glColor3ub_wrp						\
    ((void  (*)(GLubyte red,GLubyte green,GLubyte blue                                        \
    ))GL_ENTRY_PTR(glColor3ub_Idx))


GLAPI void  APIENTRY glColor3ub(GLubyte red,GLubyte green,GLubyte blue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3ub_Idx))
	{
            GL_ENTRY_PTR(glColor3ub_Idx) = dlsym(RTLD_NEXT,"glColor3ub");
            if(!GL_ENTRY_PTR(glColor3ub_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3ub_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3ub_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3ub_wrp(red,green,blue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3ub_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3ub_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3ub_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3ub_Idx),
				 GL_ENTRY_LAST_TS(glColor3ub_Idx));
        if(last_diff > 1000000000){
            printf("glColor3ub %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3ub_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ub_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ub_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3ub_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3ub_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3ub_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3ub_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3ub_Idx) = get_ts();
        }


	

}