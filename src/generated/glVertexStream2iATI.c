#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream2iATI_wrp						\
    ((void  (*)(GLenum stream,GLint x,GLint y                                        \
    ))GL_ENTRY_PTR(glVertexStream2iATI_Idx))


GLAPI void  APIENTRY glVertexStream2iATI(GLenum stream,GLint x,GLint y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream2iATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream2iATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream2iATI_wrp(stream,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream2iATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream2iATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream2iATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream2iATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream2iATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream2iATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream2iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream2iATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream2iATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream2iATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream2iATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream2iATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream2iATI_Idx) = get_ts();
        }


	

}