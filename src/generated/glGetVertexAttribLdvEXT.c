#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribLdvEXT_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribLdvEXT_Idx))


GLAPI void  APIENTRY glGetVertexAttribLdvEXT(GLuint index,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribLdvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribLdvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribLdvEXT_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribLdvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribLdvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribLdvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribLdvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribLdvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribLdvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLdvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribLdvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribLdvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribLdvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribLdvEXT_Idx) = get_ts();
        }


	

}