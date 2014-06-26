#include <glTraceCommon.h>
#include <generated.h>

#define glGetPixelMapuiv_wrp						\
    ((void  (*)(GLenum map,GLuint *values                                        \
    ))GL_ENTRY_PTR(glGetPixelMapuiv_Idx))


GLAPI void  APIENTRY glGetPixelMapuiv(GLenum map,GLuint *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPixelMapuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPixelMapuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPixelMapuiv_wrp(map,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPixelMapuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPixelMapuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPixelMapuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPixelMapuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetPixelMapuiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetPixelMapuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPixelMapuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetPixelMapuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPixelMapuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPixelMapuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPixelMapuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPixelMapuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPixelMapuiv_Idx) = get_ts();
        }


	

}