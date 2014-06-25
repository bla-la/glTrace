#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3dvMESA_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3dvMESA_Idx))


GLAPI void  APIENTRY glWindowPos3dvMESA(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3dvMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3dvMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos3dvMESA");
            if(!GL_ENTRY_PTR(glWindowPos3dvMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3dvMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3dvMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3dvMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3dvMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3dvMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3dvMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3dvMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3dvMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3dvMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3dvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dvMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3dvMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3dvMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3dvMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3dvMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3dvMESA_Idx) = get_ts();
        }


	

}