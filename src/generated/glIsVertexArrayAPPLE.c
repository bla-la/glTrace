#include <glTraceCommon.h>
#include <generated.h>

#define glIsVertexArrayAPPLE_wrp						\
    ((GLboolean  (*)(GLuint array                                        \
    ))GL_ENTRY_PTR(glIsVertexArrayAPPLE_Idx))


GLAPI GLboolean  APIENTRY glIsVertexArrayAPPLE(GLuint array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsVertexArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsVertexArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsVertexArrayAPPLE_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsVertexArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsVertexArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glIsVertexArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsVertexArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glIsVertexArrayAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glIsVertexArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsVertexArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsVertexArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsVertexArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsVertexArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsVertexArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsVertexArrayAPPLE_Idx) = get_ts();
        }


	return retval;

}