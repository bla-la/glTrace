#include <glTraceCommon.h>
#include <generated.h>

#define glPushAttrib_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glPushAttrib_Idx))


GLAPI void  APIENTRY glPushAttrib(GLbitfield mask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPushAttrib_Idx))
	{
            GL_ENTRY_PTR(glPushAttrib_Idx) = dlsym(RTLD_NEXT,"glPushAttrib");
            if(!GL_ENTRY_PTR(glPushAttrib_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPushAttrib_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushAttrib_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushAttrib_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushAttrib_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushAttrib_Idx) ++;

        GL_ENTRY_LAST_TS(glPushAttrib_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushAttrib_Idx),
				 GL_ENTRY_LAST_TS(glPushAttrib_Idx));
        if(last_diff > 1000000000){
            printf("glPushAttrib %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glPushAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glPushAttrib_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushAttrib_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushAttrib_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushAttrib_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushAttrib_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushAttrib_Idx) = get_ts();
        }


	

}