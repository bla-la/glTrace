#include <glTraceCommon.h>
#include <generated.h>

#define glBindVertexShaderEXT_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glBindVertexShaderEXT_Idx))


GLAPI void  APIENTRY glBindVertexShaderEXT(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindVertexShaderEXT_Idx))
	{
            GL_ENTRY_PTR(glBindVertexShaderEXT_Idx) = dlsym(RTLD_NEXT,"glBindVertexShaderEXT");
            if(!GL_ENTRY_PTR(glBindVertexShaderEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindVertexShaderEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVertexShaderEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVertexShaderEXT_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVertexShaderEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVertexShaderEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVertexShaderEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVertexShaderEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindVertexShaderEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindVertexShaderEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVertexShaderEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexShaderEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexShaderEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVertexShaderEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVertexShaderEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVertexShaderEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVertexShaderEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVertexShaderEXT_Idx) = get_ts();
        }


	

}