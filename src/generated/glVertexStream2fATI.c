#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream2fATI_wrp						\
    ((void  (*)(GLenum stream,GLfloat x,GLfloat y                                        \
    ))GL_ENTRY_PTR(glVertexStream2fATI_Idx))


GLAPI void  APIENTRY glVertexStream2fATI(GLenum stream,GLfloat x,GLfloat y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream2fATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream2fATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream2fATI_wrp(stream,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream2fATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream2fATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream2fATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream2fATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream2fATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream2fATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream2fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2fATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream2fATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream2fATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream2fATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream2fATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream2fATI_Idx) = get_ts();
        }


	

}