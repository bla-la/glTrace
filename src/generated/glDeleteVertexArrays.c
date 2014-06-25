#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteVertexArrays_wrp						\
    ((void  (*)(GLsizei n,const GLuint *arrays                                        \
    ))GL_ENTRY_PTR(glDeleteVertexArrays_Idx))


GLAPI void  APIENTRY glDeleteVertexArrays(GLsizei n,const GLuint *arrays)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteVertexArrays_Idx))
	{
            GL_ENTRY_PTR(glDeleteVertexArrays_Idx) = dlsym(RTLD_NEXT,"glDeleteVertexArrays");
            if(!GL_ENTRY_PTR(glDeleteVertexArrays_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteVertexArrays_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteVertexArrays_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteVertexArrays_wrp(n,arrays);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteVertexArrays_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteVertexArrays_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteVertexArrays_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteVertexArrays_Idx),
				 GL_ENTRY_LAST_TS(glDeleteVertexArrays_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteVertexArrays %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArrays_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArrays_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArrays_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArrays_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteVertexArrays_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteVertexArrays_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteVertexArrays_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteVertexArrays_Idx) = get_ts();
        }


	

}