#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos4fvMESA_wrp						\
    ((void  (*)(const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glWindowPos4fvMESA_Idx))


GLAPI void  APIENTRY glWindowPos4fvMESA(const GLfloat *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos4fvMESA_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos4fvMESA_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos4fvMESA_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos4fvMESA_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos4fvMESA_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos4fvMESA_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos4fvMESA_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos4fvMESA_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos4fvMESA %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos4fvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4fvMESA_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos4fvMESA_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos4fvMESA_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos4fvMESA_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos4fvMESA_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos4fvMESA_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos4fvMESA_Idx) = get_ts();
        }


	

}