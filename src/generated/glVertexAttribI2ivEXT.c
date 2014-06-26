#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI2ivEXT_wrp						\
    ((void  (*)(GLuint index,const GLint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribI2ivEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI2ivEXT(GLuint index,const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI2ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI2ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI2ivEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI2ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI2ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI2ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI2ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI2ivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI2ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI2ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI2ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI2ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI2ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI2ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI2ivEXT_Idx) = get_ts();
        }


	

}