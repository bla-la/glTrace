#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribivNV_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribivNV_Idx))


GLAPI void  APIENTRY glGetVertexAttribivNV(GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribivNV_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribivNV_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribivNV");
            if(!GL_ENTRY_PTR(glGetVertexAttribivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribivNV_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribivNV_Idx) = get_ts();
        }


	

}