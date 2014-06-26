#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelMapfv_wrp						\
    ((void  (*)(GLenum map,GLfloat *values                                        \
    ))GL_ENTRY_PTR(glGetPixelMapfv_Idx))


GLAPI void  APIENTRY glGetPixelMapfv(GLenum map,GLfloat *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPixelMapfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelMapfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelMapfv_wrp(map,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelMapfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelMapfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelMapfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelMapfv_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelMapfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetPixelMapfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelMapfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelMapfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelMapfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelMapfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelMapfv_Idx) = get_ts();
        }


	

}