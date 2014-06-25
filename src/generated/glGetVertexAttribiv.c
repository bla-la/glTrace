#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribiv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribiv_Idx))


GLAPI void  APIENTRY glGetVertexAttribiv(GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribiv_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribiv_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribiv");
            if(!GL_ENTRY_PTR(glGetVertexAttribiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribiv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribiv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribiv_Idx) = get_ts();
        }


	

}