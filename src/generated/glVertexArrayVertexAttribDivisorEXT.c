#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribDivisorEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribDivisorEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribDivisorEXT(GLuint vaobj,GLuint index,GLuint divisor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexAttribDivisorEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexAttribDivisorEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexAttribDivisorEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexAttribDivisorEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribDivisorEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribDivisorEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribDivisorEXT_wrp(vaobj,index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribDivisorEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribDivisorEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribDivisorEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribDivisorEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribDivisorEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribDivisorEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribDivisorEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribDivisorEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribDivisorEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribDivisorEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribDivisorEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribDivisorEXT_Idx) = get_ts();
        }


	

}