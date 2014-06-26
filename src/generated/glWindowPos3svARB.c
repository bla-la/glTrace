#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3svARB_wrp						\
    ((void  (*)(const GLshort *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3svARB_Idx))


GLAPI void  APIENTRY glWindowPos3svARB(const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos3svARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3svARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3svARB_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3svARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3svARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3svARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3svARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3svARB_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos3svARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3svARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3svARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3svARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3svARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3svARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3svARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3svARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3svARB_Idx) = get_ts();
        }


	

}