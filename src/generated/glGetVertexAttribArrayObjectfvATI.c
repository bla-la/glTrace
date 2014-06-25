#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribArrayObjectfvATI_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribArrayObjectfvATI_Idx))


GLAPI void  APIENTRY glGetVertexAttribArrayObjectfvATI(GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribArrayObjectfvATI_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribArrayObjectfvATI_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribArrayObjectfvATI");
            if(!GL_ENTRY_PTR(glGetVertexAttribArrayObjectfvATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectfvATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectfvATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribArrayObjectfvATI_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectfvATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectfvATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribArrayObjectfvATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectfvATI_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribArrayObjectfvATI_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribArrayObjectfvATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectfvATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectfvATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectfvATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectfvATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectfvATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectfvATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectfvATI_Idx) = get_ts();
        }


	

}