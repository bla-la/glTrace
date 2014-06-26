#include <glTraceCommon.h>
#include <generated.h>

#define glClientActiveVertexStreamATI_wrp						\
    ((void  (*)(GLenum stream                                        \
    ))GL_ENTRY_PTR(glClientActiveVertexStreamATI_Idx))


GLAPI void  APIENTRY glClientActiveVertexStreamATI(GLenum stream)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClientActiveVertexStreamATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientActiveVertexStreamATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClientActiveVertexStreamATI_wrp(stream);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientActiveVertexStreamATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientActiveVertexStreamATI_Idx) ++;

        GL_ENTRY_LAST_TS(glClientActiveVertexStreamATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientActiveVertexStreamATI_Idx),
				 GL_ENTRY_LAST_TS(glClientActiveVertexStreamATI_Idx));


        if(last_diff > 1000000000){
            printf("glClientActiveVertexStreamATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientActiveVertexStreamATI_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveVertexStreamATI_Idx),
	             GL_ENTRY_CALL_TIME(glClientActiveVertexStreamATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientActiveVertexStreamATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientActiveVertexStreamATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientActiveVertexStreamATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientActiveVertexStreamATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientActiveVertexStreamATI_Idx) = get_ts();
        }


	

}