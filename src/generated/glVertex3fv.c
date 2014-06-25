#include <glTraceCommon.h>
#include <generated.h>

#define glVertex3fv_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertex3fv_Idx))


GLAPI void  APIENTRY glVertex3fv(const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex3fv_Idx))
	{
            GL_ENTRY_PTR(glVertex3fv_Idx) = dlsym(RTLD_NEXT,"glVertex3fv");
            if(!GL_ENTRY_PTR(glVertex3fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex3fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex3fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex3fv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex3fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex3fv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex3fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex3fv_Idx),
				 GL_ENTRY_LAST_TS(glVertex3fv_Idx));
        if(last_diff > 1000000000){
            printf("glVertex3fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex3fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex3fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex3fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex3fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex3fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex3fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex3fv_Idx) = get_ts();
        }


	

}