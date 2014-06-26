#include <glTraceCommon.h>
#include <generated.h>

#define glDrawPixels_wrp						\
    ((void  (*)(GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glDrawPixels_Idx))


GLAPI void  APIENTRY glDrawPixels(GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawPixels_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawPixels_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawPixels_wrp(width,height,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawPixels_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawPixels_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawPixels_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawPixels_Idx),
				 GL_ENTRY_LAST_TS(glDrawPixels_Idx));


        if(last_diff > 1000000000){
            printf("glDrawPixels %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawPixels_Idx),
	             GL_ENTRY_CALL_TIME(glDrawPixels_Idx),
	             GL_ENTRY_CALL_TIME(glDrawPixels_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawPixels_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawPixels_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawPixels_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawPixels_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawPixels_Idx) = get_ts();
        }


	

}