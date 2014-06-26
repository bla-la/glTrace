#include <glTraceCommon.h>
#include <generated.h>

#define glGetnPixelMapuivARB_wrp						\
    ((void  (*)(GLenum map,GLsizei bufSize,GLuint *values                                        \
    ))GL_ENTRY_PTR(glGetnPixelMapuivARB_Idx))


GLAPI void  APIENTRY glGetnPixelMapuivARB(GLenum map,GLsizei bufSize,GLuint *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnPixelMapuivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnPixelMapuivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnPixelMapuivARB_wrp(map,bufSize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnPixelMapuivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnPixelMapuivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnPixelMapuivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnPixelMapuivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnPixelMapuivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnPixelMapuivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapuivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapuivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnPixelMapuivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnPixelMapuivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnPixelMapuivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnPixelMapuivARB_Idx) = get_ts();
        }


	

}