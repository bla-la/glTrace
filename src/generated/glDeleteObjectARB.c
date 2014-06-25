#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteObjectARB_wrp						\
    ((void  (*)(GLhandleARB obj                                        \
    ))GL_ENTRY_PTR(glDeleteObjectARB_Idx))


GLAPI void  APIENTRY glDeleteObjectARB(GLhandleARB obj)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteObjectARB_Idx))
	{
            GL_ENTRY_PTR(glDeleteObjectARB_Idx) = dlsym(RTLD_NEXT,"glDeleteObjectARB");
            if(!GL_ENTRY_PTR(glDeleteObjectARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteObjectARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteObjectARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteObjectARB_wrp(obj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteObjectARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteObjectARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteObjectARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteObjectARB_Idx),
				 GL_ENTRY_LAST_TS(glDeleteObjectARB_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteObjectARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteObjectARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteObjectARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteObjectARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteObjectARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteObjectARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteObjectARB_Idx) = get_ts();
        }


	

}