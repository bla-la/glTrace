#include <glTraceCommon.h>
#include <generated.h>

#define glIsVertexArrayOES_wrp						\
    ((GLboolean  (*)(GLuint array                                        \
    ))GL_ENTRY_PTR(glIsVertexArrayOES_Idx))


GLAPI GLboolean  APIENTRY glIsVertexArrayOES(GLuint array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsVertexArrayOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsVertexArrayOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsVertexArrayOES_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsVertexArrayOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsVertexArrayOES_Idx) ++;

        GL_ENTRY_LAST_TS(glIsVertexArrayOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsVertexArrayOES_Idx),
				 GL_ENTRY_LAST_TS(glIsVertexArrayOES_Idx));


        if(last_diff > 1000000000){
            printf("glIsVertexArrayOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsVertexArrayOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArrayOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsVertexArrayOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsVertexArrayOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsVertexArrayOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsVertexArrayOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsVertexArrayOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsVertexArrayOES_Idx) = get_ts();
        }


	return retval;

}