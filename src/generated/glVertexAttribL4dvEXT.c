#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL4dvEXT_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL4dvEXT_Idx))


GLAPI void  APIENTRY glVertexAttribL4dvEXT(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribL4dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL4dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL4dvEXT_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL4dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL4dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL4dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL4dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL4dvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribL4dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL4dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL4dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL4dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL4dvEXT_Idx) = get_ts();
        }


	

}