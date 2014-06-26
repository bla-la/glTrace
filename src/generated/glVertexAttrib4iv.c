#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4iv_wrp						\
    ((void  (*)(GLuint index,const GLint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4iv_Idx))


GLAPI void  APIENTRY glVertexAttrib4iv(GLuint index,const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4iv_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4iv_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4iv_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4iv_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4iv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4iv_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4iv_Idx) = get_ts();
        }


	

}