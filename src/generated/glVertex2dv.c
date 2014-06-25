#include <glTraceCommon.h>
#include <generated.h>

#define glVertex2dv_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertex2dv_Idx))


GLAPI void  APIENTRY glVertex2dv(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex2dv_Idx))
	{
            GL_ENTRY_PTR(glVertex2dv_Idx) = dlsym(RTLD_NEXT,"glVertex2dv");
            if(!GL_ENTRY_PTR(glVertex2dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex2dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex2dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex2dv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex2dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex2dv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex2dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex2dv_Idx),
				 GL_ENTRY_LAST_TS(glVertex2dv_Idx));
        if(last_diff > 1000000000){
            printf("glVertex2dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex2dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2dv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex2dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex2dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex2dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex2dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex2dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex2dv_Idx) = get_ts();
        }


	

}