#include <glTraceCommon.h>
#include <generated.h>

#define glPassThroughxOES_wrp						\
    ((void  (*)(GLfixed token                                        \
    ))GL_ENTRY_PTR(glPassThroughxOES_Idx))


GLAPI void  APIENTRY glPassThroughxOES(GLfixed token)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPassThroughxOES_Idx))
	{
            GL_ENTRY_PTR(glPassThroughxOES_Idx) = dlsym(RTLD_NEXT,"glPassThroughxOES");
            if(!GL_ENTRY_PTR(glPassThroughxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPassThroughxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glPassThroughxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPassThroughxOES_wrp(token);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPassThroughxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPassThroughxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glPassThroughxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPassThroughxOES_Idx),
				 GL_ENTRY_LAST_TS(glPassThroughxOES_Idx));
        if(last_diff > 1000000000){
            printf("glPassThroughxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPassThroughxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPassThroughxOES_Idx),
	             GL_ENTRY_CALL_TIME(glPassThroughxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glPassThroughxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPassThroughxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPassThroughxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPassThroughxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPassThroughxOES_Idx) = get_ts();
        }


	

}