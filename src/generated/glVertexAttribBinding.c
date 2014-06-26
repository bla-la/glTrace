#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribBinding_wrp						\
    ((void  (*)(GLuint attribindex,GLuint bindingindex                                        \
    ))GL_ENTRY_PTR(glVertexAttribBinding_Idx))


GLAPI void  APIENTRY glVertexAttribBinding(GLuint attribindex,GLuint bindingindex)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribBinding_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribBinding_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribBinding_wrp(attribindex,bindingindex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribBinding_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribBinding_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribBinding_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribBinding_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribBinding_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribBinding %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribBinding_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribBinding_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribBinding_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribBinding_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribBinding_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribBinding_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribBinding_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribBinding_Idx) = get_ts();
        }


	

}