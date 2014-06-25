#include <glTraceCommon.h>
#include <generated.h>

#define glIndexdv_wrp						\
    ((void  (*)(const GLdouble *c                                        \
    ))GL_ENTRY_PTR(glIndexdv_Idx))


GLAPI void  APIENTRY glIndexdv(const GLdouble *c)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexdv_Idx))
	{
            GL_ENTRY_PTR(glIndexdv_Idx) = dlsym(RTLD_NEXT,"glIndexdv");
            if(!GL_ENTRY_PTR(glIndexdv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexdv_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexdv_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexdv_Idx),
				 GL_ENTRY_LAST_TS(glIndexdv_Idx));
        if(last_diff > 1000000000){
            printf("glIndexdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexdv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexdv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexdv_Idx) = get_ts();
        }


	

}