#include <glTraceCommon.h>
#include <generated.h>

#define glBitmapxOES_wrp						\
    ((void  (*)(GLsizei width,GLsizei height,GLfixed xorig,GLfixed yorig,GLfixed xmove,GLfixed ymove,const GLubyte *bitmap                                        \
    ))GL_ENTRY_PTR(glBitmapxOES_Idx))


GLAPI void  APIENTRY glBitmapxOES(GLsizei width,GLsizei height,GLfixed xorig,GLfixed yorig,GLfixed xmove,GLfixed ymove,const GLubyte *bitmap)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBitmapxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBitmapxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBitmapxOES_wrp(width,height,xorig,yorig,xmove,ymove,bitmap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBitmapxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBitmapxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBitmapxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBitmapxOES_Idx),
				 GL_ENTRY_LAST_TS(glBitmapxOES_Idx));


        if(last_diff > 1000000000){
            printf("glBitmapxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBitmapxOES_Idx),
	             GL_ENTRY_CALL_TIME(glBitmapxOES_Idx),
	             GL_ENTRY_CALL_TIME(glBitmapxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBitmapxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBitmapxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBitmapxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBitmapxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBitmapxOES_Idx) = get_ts();
        }


	

}