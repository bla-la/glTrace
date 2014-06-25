#include <glTraceCommon.h>
#include <generated.h>

#define glColor3ubv_wrp						\
    ((void  (*)(const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glColor3ubv_Idx))


GLAPI void  APIENTRY glColor3ubv(const GLubyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor3ubv_Idx))
	{
            GL_ENTRY_PTR(glColor3ubv_Idx) = dlsym(RTLD_NEXT,"glColor3ubv");
            if(!GL_ENTRY_PTR(glColor3ubv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor3ubv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor3ubv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor3ubv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor3ubv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor3ubv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor3ubv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor3ubv_Idx),
				 GL_ENTRY_LAST_TS(glColor3ubv_Idx));
        if(last_diff > 1000000000){
            printf("glColor3ubv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor3ubv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ubv_Idx),
	             GL_ENTRY_CALL_TIME(glColor3ubv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor3ubv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor3ubv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor3ubv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor3ubv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor3ubv_Idx) = get_ts();
        }


	

}