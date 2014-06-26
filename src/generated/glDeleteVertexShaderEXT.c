#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteVertexShaderEXT_wrp						\
    ((void  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glDeleteVertexShaderEXT_Idx))


GLAPI void  APIENTRY glDeleteVertexShaderEXT(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteVertexShaderEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteVertexShaderEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteVertexShaderEXT_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteVertexShaderEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteVertexShaderEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteVertexShaderEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteVertexShaderEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteVertexShaderEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteVertexShaderEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteVertexShaderEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexShaderEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexShaderEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteVertexShaderEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteVertexShaderEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteVertexShaderEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteVertexShaderEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteVertexShaderEXT_Idx) = get_ts();
        }


	

}