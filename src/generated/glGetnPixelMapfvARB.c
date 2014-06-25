#include <glTraceCommon.h>
#include <generated.h>

#define glGetnPixelMapfvARB_wrp						\
    ((void  (*)(GLenum map,GLsizei bufSize,GLfloat *values                                        \
    ))GL_ENTRY_PTR(glGetnPixelMapfvARB_Idx))


GLAPI void  APIENTRY glGetnPixelMapfvARB(GLenum map,GLsizei bufSize,GLfloat *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnPixelMapfvARB_Idx))
	{
            GL_ENTRY_PTR(glGetnPixelMapfvARB_Idx) = dlsym(RTLD_NEXT,"glGetnPixelMapfvARB");
            if(!GL_ENTRY_PTR(glGetnPixelMapfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnPixelMapfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnPixelMapfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnPixelMapfvARB_wrp(map,bufSize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnPixelMapfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnPixelMapfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnPixelMapfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnPixelMapfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnPixelMapfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnPixelMapfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnPixelMapfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnPixelMapfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnPixelMapfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnPixelMapfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnPixelMapfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnPixelMapfvARB_Idx) = get_ts();
        }


	

}