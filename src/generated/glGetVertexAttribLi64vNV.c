#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribLi64vNV_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribLi64vNV_Idx))


GLAPI void  APIENTRY glGetVertexAttribLi64vNV(GLuint index,GLenum pname,GLint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribLi64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribLi64vNV_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribLi64vNV");
            if(!GL_ENTRY_PTR(glGetVertexAttribLi64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribLi64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribLi64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribLi64vNV_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribLi64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribLi64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribLi64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribLi64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribLi64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribLi64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLi64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLi64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribLi64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribLi64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribLi64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribLi64vNV_Idx) = get_ts();
        }


	

}