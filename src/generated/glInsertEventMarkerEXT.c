#include <glTraceCommon.h>
#include <generated.h>

#define glInsertEventMarkerEXT_wrp						\
    ((void  (*)(GLsizei length,const GLchar *marker                                        \
    ))GL_ENTRY_PTR(glInsertEventMarkerEXT_Idx))


GLAPI void  APIENTRY glInsertEventMarkerEXT(GLsizei length,const GLchar *marker)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glInsertEventMarkerEXT_Idx))
	{
            GL_ENTRY_PTR(glInsertEventMarkerEXT_Idx) = dlsym(RTLD_NEXT,"glInsertEventMarkerEXT");
            if(!GL_ENTRY_PTR(glInsertEventMarkerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glInsertEventMarkerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glInsertEventMarkerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInsertEventMarkerEXT_wrp(length,marker);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInsertEventMarkerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInsertEventMarkerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glInsertEventMarkerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInsertEventMarkerEXT_Idx),
				 GL_ENTRY_LAST_TS(glInsertEventMarkerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glInsertEventMarkerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInsertEventMarkerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glInsertEventMarkerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glInsertEventMarkerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glInsertEventMarkerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInsertEventMarkerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInsertEventMarkerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInsertEventMarkerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInsertEventMarkerEXT_Idx) = get_ts();
        }


	

}