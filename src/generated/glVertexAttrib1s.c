#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib1s_wrp						\
    ((void  (*)(GLuint index,GLshort x                                        \
    ))GL_ENTRY_PTR(glVertexAttrib1s_Idx))


GLAPI void  APIENTRY glVertexAttrib1s(GLuint index,GLshort x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib1s_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib1s_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib1s_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib1s_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib1s_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib1s_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib1s_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib1s_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib1s %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1s_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib1s_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib1s_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib1s_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib1s_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib1s_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib1s_Idx) = get_ts();
        }


	

}