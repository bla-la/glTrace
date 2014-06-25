#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2dvMESA_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glWindowPos2dvMESA_Idx))


GLAPI void  APIENTRY glWindowPos2dvMESA(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2dvMESA_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2dvMESA_Idx) = dlsym(RTLD_NEXT,"glWindowPos2dvMESA");
            if(!GL_ENTRY_PTR(glWindowPos2dvMESA_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2dvMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2dvMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2dvMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2dvMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2dvMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2dvMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2dvMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2dvMESA_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2dvMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2dvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2dvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2dvMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2dvMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2dvMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2dvMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2dvMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2dvMESA_Idx) = get_ts();
        }


	

}