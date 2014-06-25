#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2sARB_wrp						\
    ((void  (*)(GLshort x,GLshort y                                        \
    ))GL_ENTRY_PTR(glWindowPos2sARB_Idx))


GLAPI void  APIENTRY glWindowPos2sARB(GLshort x,GLshort y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2sARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2sARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos2sARB");
            if(!GL_ENTRY_PTR(glWindowPos2sARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2sARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2sARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2sARB_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2sARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2sARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2sARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2sARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2sARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2sARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2sARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2sARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2sARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2sARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2sARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2sARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2sARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2sARB_Idx) = get_ts();
        }


	

}