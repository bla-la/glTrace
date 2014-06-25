#include <glTraceCommon.h>
#include <generated.h>

#define glGetAttachedObjectsARB_wrp						\
    ((void  (*)(GLhandleARB containerObj,GLsizei maxCount,GLsizei *count,GLhandleARB *obj                                        \
    ))GL_ENTRY_PTR(glGetAttachedObjectsARB_Idx))


GLAPI void  APIENTRY glGetAttachedObjectsARB(GLhandleARB containerObj,GLsizei maxCount,GLsizei *count,GLhandleARB *obj)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetAttachedObjectsARB_Idx))
	{
            GL_ENTRY_PTR(glGetAttachedObjectsARB_Idx) = dlsym(RTLD_NEXT,"glGetAttachedObjectsARB");
            if(!GL_ENTRY_PTR(glGetAttachedObjectsARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetAttachedObjectsARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetAttachedObjectsARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetAttachedObjectsARB_wrp(containerObj,maxCount,count,obj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetAttachedObjectsARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetAttachedObjectsARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetAttachedObjectsARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetAttachedObjectsARB_Idx),
				 GL_ENTRY_LAST_TS(glGetAttachedObjectsARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetAttachedObjectsARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetAttachedObjectsARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttachedObjectsARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttachedObjectsARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetAttachedObjectsARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetAttachedObjectsARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetAttachedObjectsARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetAttachedObjectsARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetAttachedObjectsARB_Idx) = get_ts();
        }


	

}