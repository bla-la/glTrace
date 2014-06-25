#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribLdv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribLdv_Idx))


GLAPI void  APIENTRY glGetVertexAttribLdv(GLuint index,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribLdv_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribLdv_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribLdv");
            if(!GL_ENTRY_PTR(glGetVertexAttribLdv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribLdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribLdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribLdv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribLdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribLdv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribLdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribLdv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribLdv_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribLdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribLdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribLdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribLdv_Idx) = get_ts();
        }


	

}