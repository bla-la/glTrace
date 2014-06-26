#include <glTraceCommon.h>
#include <generated.h>

#define glPixelMapuiv_wrp						\
    ((void  (*)(GLenum map,GLsizei mapsize,const GLuint *values                                        \
    ))GL_ENTRY_PTR(glPixelMapuiv_Idx))


GLAPI void  APIENTRY glPixelMapuiv(GLenum map,GLsizei mapsize,const GLuint *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelMapuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelMapuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelMapuiv_wrp(map,mapsize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelMapuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelMapuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelMapuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelMapuiv_Idx),
				 GL_ENTRY_LAST_TS(glPixelMapuiv_Idx));


        if(last_diff > 1000000000){
            printf("glPixelMapuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelMapuiv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapuiv_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelMapuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelMapuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelMapuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelMapuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelMapuiv_Idx) = get_ts();
        }


	

}