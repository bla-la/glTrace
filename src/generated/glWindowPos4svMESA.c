#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4svMESA_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos4svMESA_Idx))


GLAPI void  APIENTRY glWindowPos4svMESA(const GLshort *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos4svMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos4svMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos4svMESA");
            if(!GL_ENTRY_PTR(glWindowPos4svMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos4svMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4svMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4svMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4svMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4svMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4svMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4svMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4svMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos4svMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4svMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4svMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4svMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4svMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4svMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4svMESA_Idx) = get_ts();
        }


	

}