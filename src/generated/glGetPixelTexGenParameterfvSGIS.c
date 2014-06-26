#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelTexGenParameterfvSGIS_wrp						\
    ((void  (*)(GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetPixelTexGenParameterfvSGIS_Idx))


GLAPI void  APIENTRY glGetPixelTexGenParameterfvSGIS(GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPixelTexGenParameterfvSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelTexGenParameterfvSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelTexGenParameterfvSGIS_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterfvSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterfvSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelTexGenParameterfvSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelTexGenParameterfvSGIS_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelTexGenParameterfvSGIS_Idx));


        if(last_diff > 1000000000){
            printf("glGetPixelTexGenParameterfvSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterfvSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterfvSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterfvSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterfvSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelTexGenParameterfvSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelTexGenParameterfvSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelTexGenParameterfvSGIS_Idx) = get_ts();
        }


	

}