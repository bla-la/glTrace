#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexBindingDivisorEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint bindingindex,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexBindingDivisorEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexBindingDivisorEXT(GLuint vaobj,GLuint bindingindex,GLuint divisor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexBindingDivisorEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexBindingDivisorEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexBindingDivisorEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexBindingDivisorEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexBindingDivisorEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexBindingDivisorEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexBindingDivisorEXT_wrp(vaobj,bindingindex,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexBindingDivisorEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexBindingDivisorEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexBindingDivisorEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexBindingDivisorEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexBindingDivisorEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexBindingDivisorEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexBindingDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexBindingDivisorEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexBindingDivisorEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexBindingDivisorEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexBindingDivisorEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexBindingDivisorEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexBindingDivisorEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexBindingDivisorEXT_Idx) = get_ts();
        }


	

}