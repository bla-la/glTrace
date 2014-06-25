#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribDivisor_wrp						\
    ((void  (*)(GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexAttribDivisor_Idx))


GLAPI void  APIENTRY glVertexAttribDivisor(GLuint index,GLuint divisor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribDivisor_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribDivisor_Idx) = dlsym(RTLD_NEXT,"glVertexAttribDivisor");
            if(!GL_ENTRY_PTR(glVertexAttribDivisor_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribDivisor_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribDivisor_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribDivisor_wrp(index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribDivisor_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribDivisor_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribDivisor_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribDivisor_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribDivisor_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribDivisor %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisor_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisor_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisor_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisor_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribDivisor_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribDivisor_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribDivisor_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribDivisor_Idx) = get_ts();
        }


	

}