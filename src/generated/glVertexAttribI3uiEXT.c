#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI3uiEXT_wrp						\
    ((void  (*)(GLuint index,GLuint x,GLuint y,GLuint z                                        \
    ))GL_ENTRY_PTR(glVertexAttribI3uiEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI3uiEXT(GLuint index,GLuint x,GLuint y,GLuint z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribI3uiEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribI3uiEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribI3uiEXT");
            if(!GL_ENTRY_PTR(glVertexAttribI3uiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribI3uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI3uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI3uiEXT_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI3uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI3uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI3uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI3uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI3uiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribI3uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI3uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI3uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI3uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI3uiEXT_Idx) = get_ts();
        }


	

}