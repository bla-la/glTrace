#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2uiEXT_wrp						\
    ((void  (*)(GLuint index,GLuint x,GLuint y                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2uiEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI2uiEXT(GLuint index,GLuint x,GLuint y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI2uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2uiEXT_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2uiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI2uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2uiEXT_Idx) = get_ts();
        }


	

}