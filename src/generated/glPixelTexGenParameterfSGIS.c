#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTexGenParameterfSGIS_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPixelTexGenParameterfSGIS_Idx))


GLAPI void  APIENTRY glPixelTexGenParameterfSGIS(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPixelTexGenParameterfSGIS_Idx))
	{
            GL_ENTRY_PTR(glPixelTexGenParameterfSGIS_Idx) = dlsym(RTLD_NEXT,"glPixelTexGenParameterfSGIS");
            if(!GL_ENTRY_PTR(glPixelTexGenParameterfSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPixelTexGenParameterfSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTexGenParameterfSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTexGenParameterfSGIS_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTexGenParameterfSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTexGenParameterfSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTexGenParameterfSGIS_Idx),
				 GL_ENTRY_LAST_TS(glPixelTexGenParameterfSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glPixelTexGenParameterfSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTexGenParameterfSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterfSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTexGenParameterfSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTexGenParameterfSGIS_Idx) = get_ts();
        }


	

}