#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribDivisorEXT_wrp						\
    ((void  (*)(GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexAttribDivisorEXT_Idx))


GLAPI void  APIENTRY glVertexAttribDivisorEXT(GLuint index,GLuint divisor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribDivisorEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribDivisorEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribDivisorEXT_wrp(index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribDivisorEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribDivisorEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribDivisorEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribDivisorEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribDivisorEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribDivisorEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribDivisorEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribDivisorEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribDivisorEXT_Idx) = get_ts();
        }


	

}