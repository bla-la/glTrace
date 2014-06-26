#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribLui64vNV_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribLui64vNV_Idx))


GLAPI void  APIENTRY glGetVertexAttribLui64vNV(GLuint index,GLenum pname,GLuint64EXT *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribLui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribLui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribLui64vNV_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribLui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribLui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribLui64vNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribLui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribLui64vNV_Idx) = get_ts();
        }


	

}