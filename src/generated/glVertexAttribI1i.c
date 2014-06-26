#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI1i_wrp						\
    ((void  (*)(GLuint index,GLint x                                        \
    ))GL_ENTRY_PTR(glVertexAttribI1i_Idx))


GLAPI void  APIENTRY glVertexAttribI1i(GLuint index,GLint x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI1i_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI1i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI1i_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI1i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI1i_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI1i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI1i_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI1i_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI1i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1i_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1i_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI1i_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI1i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI1i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI1i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI1i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI1i_Idx) = get_ts();
        }


	

}