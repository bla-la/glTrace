#include <glTraceCommon.h>
#include <generated.h>

#define glVertexStream1iATI_wrp						\
    ((void  (*)(GLenum stream,GLint x                                        \
    ))GL_ENTRY_PTR(glVertexStream1iATI_Idx))


GLAPI void  APIENTRY glVertexStream1iATI(GLenum stream,GLint x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexStream1iATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexStream1iATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexStream1iATI_wrp(stream,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexStream1iATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexStream1iATI_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexStream1iATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexStream1iATI_Idx),
				 GL_ENTRY_LAST_TS(glVertexStream1iATI_Idx));


        if(last_diff > 1000000000){
            printf("glVertexStream1iATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexStream1iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1iATI_Idx),
	             GL_ENTRY_CALL_TIME(glVertexStream1iATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexStream1iATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexStream1iATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexStream1iATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexStream1iATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexStream1iATI_Idx) = get_ts();
        }


	

}