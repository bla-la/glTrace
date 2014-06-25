#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4ivMESA_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glWindowPos4ivMESA_Idx))


GLAPI void  APIENTRY glWindowPos4ivMESA(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos4ivMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos4ivMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos4ivMESA");
            if(!GL_ENTRY_PTR(glWindowPos4ivMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos4ivMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4ivMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4ivMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4ivMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4ivMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4ivMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4ivMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4ivMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos4ivMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4ivMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4ivMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4ivMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4ivMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4ivMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4ivMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4ivMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4ivMESA_Idx) = get_ts();
        }


	

}