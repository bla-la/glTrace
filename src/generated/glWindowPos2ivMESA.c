#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2ivMESA_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glWindowPos2ivMESA_Idx))


GLAPI void  APIENTRY glWindowPos2ivMESA(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2ivMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2ivMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos2ivMESA");
            if(!GL_ENTRY_PTR(glWindowPos2ivMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2ivMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2ivMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2ivMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2ivMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2ivMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2ivMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2ivMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2ivMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2ivMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2ivMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2ivMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2ivMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2ivMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2ivMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2ivMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2ivMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2ivMESA_Idx) = get_ts();
        }


	

}