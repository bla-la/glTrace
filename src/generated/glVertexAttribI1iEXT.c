#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI1iEXT_wrp						\
    ((void  (*)(GLuint index,GLint x                                        \
    ))GL_ENTRY_PTR(glVertexAttribI1iEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI1iEXT(GLuint index,GLint x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI1iEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI1iEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI1iEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI1iEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI1iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI1iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI1iEXT_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI1iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI1iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI1iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI1iEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI1iEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI1iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI1iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI1iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI1iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI1iEXT_Idx) = get_ts();
        }


	

}