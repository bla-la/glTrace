#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1dEXT_wrp						\
    ((void  (*)(GLuint index,GLdouble x                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1dEXT_Idx))


GLAPI void  APIENTRY glVertexAttribL1dEXT(GLuint index,GLdouble x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribL1dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1dEXT_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1dEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1dEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribL1dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1dEXT_Idx) = get_ts();
        }


	

}