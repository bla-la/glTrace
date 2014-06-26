#include <glTraceCommon.h>
#include <generated.h>

#define glMatrixIndexPointerOES_wrp						\
    ((void  (*)(GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glMatrixIndexPointerOES_Idx))


GLAPI void  APIENTRY glMatrixIndexPointerOES(GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMatrixIndexPointerOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMatrixIndexPointerOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMatrixIndexPointerOES_wrp(size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMatrixIndexPointerOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMatrixIndexPointerOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMatrixIndexPointerOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMatrixIndexPointerOES_Idx),
				 GL_ENTRY_LAST_TS(glMatrixIndexPointerOES_Idx));


        if(last_diff > 1000000000){
            printf("glMatrixIndexPointerOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexPointerOES_Idx),
	             GL_ENTRY_CALL_TIME(glMatrixIndexPointerOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMatrixIndexPointerOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMatrixIndexPointerOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMatrixIndexPointerOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMatrixIndexPointerOES_Idx) = get_ts();
        }


	

}