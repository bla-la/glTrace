#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3ivARB_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3ivARB_Idx))


GLAPI void  APIENTRY glWindowPos3ivARB(const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos3ivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3ivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3ivARB_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3ivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3ivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3ivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3ivARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3ivARB_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos3ivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3ivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3ivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3ivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3ivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3ivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3ivARB_Idx) = get_ts();
        }


	

}