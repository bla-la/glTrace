#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribDivisorNV_wrp						\
    ((void  (*)(GLuint index,GLuint divisor                                        \
    ))GL_ENTRY_PTR(glVertexAttribDivisorNV_Idx))


GLAPI void  APIENTRY glVertexAttribDivisorNV(GLuint index,GLuint divisor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribDivisorNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribDivisorNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribDivisorNV");
            if(!GL_ENTRY_PTR(glVertexAttribDivisorNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribDivisorNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribDivisorNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribDivisorNV_wrp(index,divisor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribDivisorNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribDivisorNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribDivisorNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribDivisorNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribDivisorNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribDivisorNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribDivisorNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribDivisorNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribDivisorNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribDivisorNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribDivisorNV_Idx) = get_ts();
        }


	

}