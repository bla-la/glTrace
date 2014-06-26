#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2svMESA_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos2svMESA_Idx))


GLAPI void  APIENTRY glWindowPos2svMESA(const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos2svMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2svMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2svMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2svMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2svMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2svMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2svMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2svMESA_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos2svMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2svMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2svMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2svMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2svMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2svMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2svMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2svMESA_Idx) = get_ts();
        }


	

}