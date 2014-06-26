#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribArrayObjectivATI_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribArrayObjectivATI_Idx))


GLAPI void  APIENTRY glGetVertexAttribArrayObjectivATI(GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectivATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectivATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribArrayObjectivATI_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectivATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectivATI_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribArrayObjectivATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectivATI_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribArrayObjectivATI_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribArrayObjectivATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectivATI_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectivATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectivATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectivATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribArrayObjectivATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribArrayObjectivATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribArrayObjectivATI_Idx) = get_ts();
        }


	

}