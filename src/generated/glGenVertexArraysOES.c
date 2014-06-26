#include <glTraceCommon.h>
#include <generated.h>

#define glGenVertexArraysOES_wrp						\
    ((void  (*)(GLsizei n,GLuint *arrays                                        \
    ))GL_ENTRY_PTR(glGenVertexArraysOES_Idx))


GLAPI void  APIENTRY glGenVertexArraysOES(GLsizei n,GLuint *arrays)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenVertexArraysOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenVertexArraysOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenVertexArraysOES_wrp(n,arrays);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenVertexArraysOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenVertexArraysOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGenVertexArraysOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenVertexArraysOES_Idx),
				 GL_ENTRY_LAST_TS(glGenVertexArraysOES_Idx));


        if(last_diff > 1000000000){
            printf("glGenVertexArraysOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenVertexArraysOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexArraysOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexArraysOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenVertexArraysOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenVertexArraysOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenVertexArraysOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenVertexArraysOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenVertexArraysOES_Idx) = get_ts();
        }


	

}