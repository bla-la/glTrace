#include <glTraceCommon.h>
#include <generated.h>

#define glGetnPixelMapusvARB_wrp						\
    ((void  (*)(GLenum map,GLsizei bufSize,GLushort *values                                        \
    ))GL_ENTRY_PTR(glGetnPixelMapusvARB_Idx))


GLAPI void  APIENTRY glGetnPixelMapusvARB(GLenum map,GLsizei bufSize,GLushort *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnPixelMapusvARB_Idx))
	{
            GL_ENTRY_PTR(glGetnPixelMapusvARB_Idx) = dlsym(RTLD_NEXT,"glGetnPixelMapusvARB");
            if(!GL_ENTRY_PTR(glGetnPixelMapusvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnPixelMapusvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnPixelMapusvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnPixelMapusvARB_wrp(map,bufSize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnPixelMapusvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnPixelMapusvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnPixelMapusvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnPixelMapusvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnPixelMapusvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnPixelMapusvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapusvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapusvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapusvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnPixelMapusvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnPixelMapusvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnPixelMapusvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnPixelMapusvARB_Idx) = get_ts();
        }


	

}