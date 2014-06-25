#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2dARB_wrp						\
    ((void  (*)(GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glWindowPos2dARB_Idx))


GLAPI void  APIENTRY glWindowPos2dARB(GLdouble x,GLdouble y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2dARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2dARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos2dARB");
            if(!GL_ENTRY_PTR(glWindowPos2dARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2dARB_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2dARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2dARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2dARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2dARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2dARB_Idx) = get_ts();
        }


	

}