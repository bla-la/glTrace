#include <glTraceCommon.h>
#include <generated.h>

#define glPixelMapx_wrp						\
    ((void  (*)(GLenum map,GLint size,const GLfixed *values                                        \
    ))GL_ENTRY_PTR(glPixelMapx_Idx))


GLAPI void  APIENTRY glPixelMapx(GLenum map,GLint size,const GLfixed *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelMapx_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelMapx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelMapx_wrp(map,size,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelMapx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelMapx_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelMapx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelMapx_Idx),
				 GL_ENTRY_LAST_TS(glPixelMapx_Idx));


        if(last_diff > 1000000000){
            printf("glPixelMapx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelMapx_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapx_Idx),
	             GL_ENTRY_CALL_TIME(glPixelMapx_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelMapx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelMapx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelMapx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelMapx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelMapx_Idx) = get_ts();
        }


	

}