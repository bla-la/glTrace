#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelTexGenParameterivSGIS_wrp						\
    ((void  (*)(GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetPixelTexGenParameterivSGIS_Idx))


GLAPI void  APIENTRY glGetPixelTexGenParameterivSGIS(GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPixelTexGenParameterivSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelTexGenParameterivSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelTexGenParameterivSGIS_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterivSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterivSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelTexGenParameterivSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelTexGenParameterivSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelTexGenParameterivSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glGetPixelTexGenParameterivSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterivSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterivSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterivSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterivSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterivSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterivSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterivSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelTexGenParameterivSGIS_Idx) = get_ts();
        }


	

}