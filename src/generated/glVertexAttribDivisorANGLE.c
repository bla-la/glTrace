#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribDivisorANGLE_wrp						\
    ((void  (*)(GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexAttribDivisorANGLE_Idx))


GLAPI void  APIENTRY glVertexAttribDivisorANGLE(GLuint index,GLuint divisor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribDivisorANGLE_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribDivisorANGLE_Idx) = dlsym(RTLD_NEXT,"glVertexAttribDivisorANGLE");
            if(!GL_ENTRY_PTR(glVertexAttribDivisorANGLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribDivisorANGLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribDivisorANGLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribDivisorANGLE_wrp(index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribDivisorANGLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribDivisorANGLE_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribDivisorANGLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribDivisorANGLE_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribDivisorANGLE_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribDivisorANGLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorANGLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorANGLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorANGLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribDivisorANGLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorANGLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribDivisorANGLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribDivisorANGLE_Idx) = get_ts();
        }


	

}