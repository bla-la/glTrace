#include <glTraceCommon.h>
#include <generated.h>

#define glVertexBindingDivisor_wrp						\
    ((void  (*)(GLuint bindingindex,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexBindingDivisor_Idx))


GLAPI void  APIENTRY glVertexBindingDivisor(GLuint bindingindex,GLuint divisor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexBindingDivisor_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexBindingDivisor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexBindingDivisor_wrp(bindingindex,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexBindingDivisor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexBindingDivisor_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexBindingDivisor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexBindingDivisor_Idx),
				 GL_ENTRY_LAST_TS(glVertexBindingDivisor_Idx));


        if(last_diff > 1000000000){
            printf("glVertexBindingDivisor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexBindingDivisor_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBindingDivisor_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBindingDivisor_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexBindingDivisor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexBindingDivisor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexBindingDivisor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexBindingDivisor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexBindingDivisor_Idx) = get_ts();
        }


	

}