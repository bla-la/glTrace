#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4uivEXT_wrp						\
    ((void  (*)(GLuint index,const GLuint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4uivEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI4uivEXT(GLuint index,const GLuint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI4uivEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI4uivEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI4uivEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI4uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI4uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4uivEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI4uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4uivEXT_Idx) = get_ts();
        }


	

}