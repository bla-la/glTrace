#include <glTraceCommon.h>
#include <generated.h>

#define glVertex4fv_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glVertex4fv_Idx))


GLAPI void  APIENTRY glVertex4fv(const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertex4fv_Idx))
	{
            GL_ENTRY_PTR(glVertex4fv_Idx) = dlsym(RTLD_NEXT,"glVertex4fv");
            if(!GL_ENTRY_PTR(glVertex4fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertex4fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertex4fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertex4fv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertex4fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertex4fv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertex4fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertex4fv_Idx),
				 GL_ENTRY_LAST_TS(glVertex4fv_Idx));
        if(last_diff > 1000000000){
            printf("glVertex4fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertex4fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4fv_Idx),
	             GL_ENTRY_CALL_TIME(glVertex4fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertex4fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertex4fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertex4fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertex4fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertex4fv_Idx) = get_ts();
        }


	

}