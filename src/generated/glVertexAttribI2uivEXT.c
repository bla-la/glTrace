#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2uivEXT_wrp						\
    ((void  (*)(GLuint index,const GLuint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2uivEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI2uivEXT(GLuint index,const GLuint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI2uivEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI2uivEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI2uivEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI2uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI2uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2uivEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI2uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2uivEXT_Idx) = get_ts();
        }


	

}