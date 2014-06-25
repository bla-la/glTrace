#include <glTraceCommon.h>
#include <generated.h>

#define glColor4ubv_wrp						\
    ((void  (*)(const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glColor4ubv_Idx))


GLAPI void  APIENTRY glColor4ubv(const GLubyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glColor4ubv_Idx))
	{
            GL_ENTRY_PTR(glColor4ubv_Idx) = dlsym(RTLD_NEXT,"glColor4ubv");
            if(!GL_ENTRY_PTR(glColor4ubv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glColor4ubv_Idx))
    	{
            GL_ENTRY_PREV_TS(glColor4ubv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glColor4ubv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glColor4ubv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glColor4ubv_Idx) ++;

        GL_ENTRY_LAST_TS(glColor4ubv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glColor4ubv_Idx),
				 GL_ENTRY_LAST_TS(glColor4ubv_Idx));
        if(last_diff > 1000000000){
            printf("glColor4ubv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glColor4ubv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubv_Idx),
	             GL_ENTRY_CALL_TIME(glColor4ubv_Idx) /
	             GL_ENTRY_CALL_COUNT(glColor4ubv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glColor4ubv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glColor4ubv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glColor4ubv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glColor4ubv_Idx) = get_ts();
        }


	

}