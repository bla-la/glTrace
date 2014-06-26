#include <glTraceCommon.h>
#include <generated.h>

#define glReadPixels_wrp						\
    ((void  (*)(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels                                        \
    ))GL_ENTRY_PTR(glReadPixels_Idx))


GLAPI void  APIENTRY glReadPixels(GLint x,GLint y,GLsizei width,GLsizei height,GLenum format,GLenum type,void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReadPixels_Idx))
    	{
            GL_ENTRY_PREV_TS(glReadPixels_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReadPixels_wrp(x,y,width,height,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReadPixels_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReadPixels_Idx) ++;

        GL_ENTRY_LAST_TS(glReadPixels_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReadPixels_Idx),
				 GL_ENTRY_LAST_TS(glReadPixels_Idx));


        if(last_diff > 1000000000){
            printf("glReadPixels %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReadPixels_Idx),
	             GL_ENTRY_CALL_TIME(glReadPixels_Idx),
	             GL_ENTRY_CALL_TIME(glReadPixels_Idx) /
	             GL_ENTRY_CALL_COUNT(glReadPixels_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReadPixels_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReadPixels_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReadPixels_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReadPixels_Idx) = get_ts();
        }


	

}