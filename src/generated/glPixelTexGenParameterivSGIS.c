#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTexGenParameterivSGIS_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glPixelTexGenParameterivSGIS_Idx))


GLAPI void  APIENTRY glPixelTexGenParameterivSGIS(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelTexGenParameterivSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTexGenParameterivSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTexGenParameterivSGIS_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTexGenParameterivSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTexGenParameterivSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTexGenParameterivSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTexGenParameterivSGIS_Idx),
				 GL_ENTRY_LAST_TS(glPixelTexGenParameterivSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glPixelTexGenParameterivSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterivSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterivSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTexGenParameterivSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterivSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTexGenParameterivSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTexGenParameterivSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTexGenParameterivSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTexGenParameterivSGIS_Idx) = get_ts();
        }


	

}