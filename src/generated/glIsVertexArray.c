#include <glTraceCommon.h>
#include <generated.h>

#define glIsVertexArray_wrp						\
    ((GLboolean  (*)(GLuint array                                        \
    ))GL_ENTRY_PTR(glIsVertexArray_Idx))


GLAPI GLboolean  APIENTRY glIsVertexArray(GLuint array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsVertexArray_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsVertexArray_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsVertexArray_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsVertexArray_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsVertexArray_Idx) ++;

        GL_ENTRY_LAST_TS(glIsVertexArray_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsVertexArray_Idx),
				 GL_ENTRY_LAST_TS(glIsVertexArray_Idx));


        if(last_diff > 1000000000){
            printf("glIsVertexArray %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsVertexArray_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArray_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArray_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsVertexArray_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsVertexArray_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsVertexArray_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsVertexArray_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsVertexArray_Idx) = get_ts();
        }


	return retval;

}