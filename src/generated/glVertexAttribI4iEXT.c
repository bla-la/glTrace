#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI4iEXT_wrp						\
    ((void  (*)(GLuint index,GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glVertexAttribI4iEXT_Idx))


GLAPI void  APIENTRY glVertexAttribI4iEXT(GLuint index,GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI4iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI4iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI4iEXT_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI4iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI4iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI4iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI4iEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI4iEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI4iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI4iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI4iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI4iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI4iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI4iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI4iEXT_Idx) = get_ts();
        }


	

}