#include <glTraceCommon.h>
#include <generated.h>

#define glGenVertexArraysAPPLE_wrp						\
    ((void  (*)(GLsizei n,GLuint *arrays                                        \
    ))GL_ENTRY_PTR(glGenVertexArraysAPPLE_Idx))


GLAPI void  APIENTRY glGenVertexArraysAPPLE(GLsizei n,GLuint *arrays)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenVertexArraysAPPLE_Idx))
	{
            GL_ENTRY_PTR(glGenVertexArraysAPPLE_Idx) = dlsym(RTLD_NEXT,"glGenVertexArraysAPPLE");
            if(!GL_ENTRY_PTR(glGenVertexArraysAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenVertexArraysAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenVertexArraysAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenVertexArraysAPPLE_wrp(n,arrays);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenVertexArraysAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenVertexArraysAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGenVertexArraysAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenVertexArraysAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGenVertexArraysAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glGenVertexArraysAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenVertexArraysAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexArraysAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGenVertexArraysAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenVertexArraysAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenVertexArraysAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenVertexArraysAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenVertexArraysAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenVertexArraysAPPLE_Idx) = get_ts();
        }


	

}