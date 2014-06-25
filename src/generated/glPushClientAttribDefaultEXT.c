#include <glTraceCommon.h>
#include <generated.h>

#define glPushClientAttribDefaultEXT_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glPushClientAttribDefaultEXT_Idx))


GLAPI void  APIENTRY glPushClientAttribDefaultEXT(GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPushClientAttribDefaultEXT_Idx))
	{
            GL_ENTRY_PTR(glPushClientAttribDefaultEXT_Idx) = dlsym(RTLD_NEXT,"glPushClientAttribDefaultEXT");
            if(!GL_ENTRY_PTR(glPushClientAttribDefaultEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPushClientAttribDefaultEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushClientAttribDefaultEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushClientAttribDefaultEXT_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushClientAttribDefaultEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushClientAttribDefaultEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPushClientAttribDefaultEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushClientAttribDefaultEXT_Idx),
				 GL_ENTRY_LAST_TS(glPushClientAttribDefaultEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPushClientAttribDefaultEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushClientAttribDefaultEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPushClientAttribDefaultEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPushClientAttribDefaultEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushClientAttribDefaultEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushClientAttribDefaultEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushClientAttribDefaultEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushClientAttribDefaultEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushClientAttribDefaultEXT_Idx) = get_ts();
        }


	

}