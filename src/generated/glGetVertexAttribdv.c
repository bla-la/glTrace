#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribdv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribdv_Idx))


GLAPI void  APIENTRY glGetVertexAttribdv(GLuint index,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribdv_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribdv_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribdv");
            if(!GL_ENTRY_PTR(glGetVertexAttribdv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribdv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribdv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribdv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribdv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribdv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribdv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribdv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribdv_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribdv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribdv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribdv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribdv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribdv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribdv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribdv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribdv_Idx) = get_ts();
        }


	

}