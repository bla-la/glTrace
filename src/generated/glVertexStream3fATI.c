#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream3fATI_wrp						\
    ((void  (*)(GLenum stream,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glVertexStream3fATI_Idx))


GLAPI void  APIENTRY glVertexStream3fATI(GLenum stream,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream3fATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream3fATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream3fATI_wrp(stream,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream3fATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream3fATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream3fATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream3fATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream3fATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream3fATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream3fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3fATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream3fATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream3fATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream3fATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream3fATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream3fATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream3fATI_Idx) = get_ts();
        }


	

}