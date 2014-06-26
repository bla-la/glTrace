#include <glTraceCommon.h>
#include <generated.h>

#define glBindVertexArray_wrp						\
    ((void  (*)(GLuint array                                        \
    ))GL_ENTRY_PTR(glBindVertexArray_Idx))


GLAPI void  APIENTRY glBindVertexArray(GLuint array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindVertexArray_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVertexArray_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVertexArray_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVertexArray_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVertexArray_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVertexArray_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVertexArray_Idx),
				 GL_ENTRY_LAST_TS(glBindVertexArray_Idx));


        if(last_diff > 1000000000){
            printf("glBindVertexArray %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVertexArray_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexArray_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexArray_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVertexArray_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVertexArray_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVertexArray_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVertexArray_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVertexArray_Idx) = get_ts();
        }


	

}