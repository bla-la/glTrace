#include <glTraceCommon.h>
#include <generated.h>

#define glPushGroupMarkerEXT_wrp						\
    ((void  (*)(GLsizei length,const GLchar *marker                                        \
    ))GL_ENTRY_PTR(glPushGroupMarkerEXT_Idx))


GLAPI void  APIENTRY glPushGroupMarkerEXT(GLsizei length,const GLchar *marker)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPushGroupMarkerEXT_Idx))
	{
            GL_ENTRY_PTR(glPushGroupMarkerEXT_Idx) = dlsym(RTLD_NEXT,"glPushGroupMarkerEXT");
            if(!GL_ENTRY_PTR(glPushGroupMarkerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPushGroupMarkerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushGroupMarkerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushGroupMarkerEXT_wrp(length,marker);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushGroupMarkerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushGroupMarkerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glPushGroupMarkerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushGroupMarkerEXT_Idx),
				 GL_ENTRY_LAST_TS(glPushGroupMarkerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glPushGroupMarkerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushGroupMarkerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPushGroupMarkerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glPushGroupMarkerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushGroupMarkerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushGroupMarkerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushGroupMarkerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushGroupMarkerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushGroupMarkerEXT_Idx) = get_ts();
        }


	

}