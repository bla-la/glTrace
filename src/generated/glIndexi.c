#include <glTraceCommon.h>
#include <generated.h>

#define glIndexi_wrp						\
    ((void  (*)(GLint c                                        \
    ))GL_ENTRY_PTR(glIndexi_Idx))


GLAPI void  APIENTRY glIndexi(GLint c)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIndexi_Idx))
	{
            GL_ENTRY_PTR(glIndexi_Idx) = dlsym(RTLD_NEXT,"glIndexi");
            if(!GL_ENTRY_PTR(glIndexi_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIndexi_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexi_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexi_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexi_Idx),
				 GL_ENTRY_LAST_TS(glIndexi_Idx));
        if(last_diff > 1000000000){
            printf("glIndexi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexi_Idx),
	             GL_ENTRY_CALL_TIME(glIndexi_Idx),
	             GL_ENTRY_CALL_TIME(glIndexi_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexi_Idx) = get_ts();
        }


	

}