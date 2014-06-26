#include <glTraceCommon.h>
#include <generated.h>

#define glBitmap_wrp						\
    ((void  (*)(GLsizei width,GLsizei height,GLfloat xorig,GLfloat yorig,GLfloat xmove,GLfloat ymove,const GLubyte *bitmap                                        \
    ))GL_ENTRY_PTR(glBitmap_Idx))


GLAPI void  APIENTRY glBitmap(GLsizei width,GLsizei height,GLfloat xorig,GLfloat yorig,GLfloat xmove,GLfloat ymove,const GLubyte *bitmap)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBitmap_Idx))
    	{
            GL_ENTRY_PREV_TS(glBitmap_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBitmap_wrp(width,height,xorig,yorig,xmove,ymove,bitmap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBitmap_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBitmap_Idx) ++;

        GL_ENTRY_LAST_TS(glBitmap_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBitmap_Idx),
				 GL_ENTRY_LAST_TS(glBitmap_Idx));


        if(last_diff > 1000000000){
            printf("glBitmap %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBitmap_Idx),
	             GL_ENTRY_CALL_TIME(glBitmap_Idx),
	             GL_ENTRY_CALL_TIME(glBitmap_Idx) /
	             GL_ENTRY_CALL_COUNT(glBitmap_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBitmap_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBitmap_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBitmap_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBitmap_Idx) = get_ts();
        }


	

}