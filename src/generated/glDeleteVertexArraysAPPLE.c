#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteVertexArraysAPPLE_wrp						\
    ((void  (*)(GLsizei n,const GLuint *arrays                                        \
    ))GL_ENTRY_PTR(glDeleteVertexArraysAPPLE_Idx))


GLAPI void  APIENTRY glDeleteVertexArraysAPPLE(GLsizei n,const GLuint *arrays)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteVertexArraysAPPLE_Idx))
	{
            GL_ENTRY_PTR(glDeleteVertexArraysAPPLE_Idx) = dlsym(RTLD_NEXT,"glDeleteVertexArraysAPPLE");
            if(!GL_ENTRY_PTR(glDeleteVertexArraysAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteVertexArraysAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteVertexArraysAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteVertexArraysAPPLE_wrp(n,arrays);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteVertexArraysAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteVertexArraysAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteVertexArraysAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteVertexArraysAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDeleteVertexArraysAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteVertexArraysAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArraysAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArraysAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteVertexArraysAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteVertexArraysAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteVertexArraysAPPLE_Idx) = get_ts();
        }


	

}