#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribI3i_wrp						\
    ((void  (*)(GLuint index,GLint x,GLint y,GLint z                                        \
    ))GL_ENTRY_PTR(glVertexAttribI3i_Idx))


GLAPI void  APIENTRY glVertexAttribI3i(GLuint index,GLint x,GLint y,GLint z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribI3i_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribI3i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribI3i_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribI3i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribI3i_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribI3i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribI3i_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribI3i_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribI3i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3i_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3i_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribI3i_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribI3i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribI3i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribI3i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribI3i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribI3i_Idx) = get_ts();
        }


	

}