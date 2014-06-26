#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3svMESA_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3svMESA_Idx))


GLAPI void  APIENTRY glWindowPos3svMESA(const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos3svMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3svMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3svMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3svMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3svMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3svMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3svMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3svMESA_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos3svMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3svMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3svMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3svMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3svMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3svMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3svMESA_Idx) = get_ts();
        }


	

}