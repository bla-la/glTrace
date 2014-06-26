#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL2dEXT_wrp						\
    ((void  (*)(GLuint index,GLdouble x,GLdouble y                                        \
    ))GL_ENTRY_PTR(glVertexAttribL2dEXT_Idx))


GLAPI void  APIENTRY glVertexAttribL2dEXT(GLuint index,GLdouble x,GLdouble y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribL2dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL2dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL2dEXT_wrp(index,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL2dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL2dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL2dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL2dEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL2dEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribL2dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL2dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL2dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL2dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL2dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL2dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL2dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL2dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL2dEXT_Idx) = get_ts();
        }


	

}