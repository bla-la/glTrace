#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribIuivEXT_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribIuivEXT_Idx))


GLAPI void  APIENTRY glGetVertexAttribIuivEXT(GLuint index,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribIuivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribIuivEXT_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribIuivEXT");
            if(!GL_ENTRY_PTR(glGetVertexAttribIuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribIuivEXT_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribIuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribIuivEXT_Idx) = get_ts();
        }


	

}