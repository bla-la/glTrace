#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI1uiEXT_wrp						\
    ((void  (*)(GLuint index,GLuint x                                        \
    ))GL_ENTRY_PTR(glVertexAttribI1uiEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI1uiEXT(GLuint index,GLuint x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI1uiEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI1uiEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI1uiEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI1uiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI1uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI1uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI1uiEXT_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI1uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI1uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI1uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI1uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI1uiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI1uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI1uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI1uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI1uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI1uiEXT_Idx) = get_ts();
        }


	

}