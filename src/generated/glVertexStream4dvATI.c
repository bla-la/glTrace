#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream4dvATI_wrp						\
    ((void  (*)(GLenum stream,const GLdouble *coords                                        \
    ))GL_ENTRY_PTR(glVertexStream4dvATI_Idx))


GLAPI void  APIENTRY glVertexStream4dvATI(GLenum stream,const GLdouble *coords)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream4dvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream4dvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream4dvATI_wrp(stream,coords);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream4dvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream4dvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream4dvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream4dvATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream4dvATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream4dvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream4dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4dvATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream4dvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream4dvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream4dvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream4dvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream4dvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream4dvATI_Idx) = get_ts();
        }


	

}