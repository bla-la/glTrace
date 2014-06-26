#include <glTraceCommon.h>
#include <generated.h>

#define glGetLocalConstantIntegervEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetLocalConstantIntegervEXT_Idx))


GLAPI void  APIENTRY glGetLocalConstantIntegervEXT(GLuint id,GLenum value,GLint *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetLocalConstantIntegervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetLocalConstantIntegervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetLocalConstantIntegervEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetLocalConstantIntegervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetLocalConstantIntegervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetLocalConstantIntegervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetLocalConstantIntegervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetLocalConstantIntegervEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetLocalConstantIntegervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetLocalConstantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetLocalConstantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetLocalConstantIntegervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetLocalConstantIntegervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetLocalConstantIntegervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetLocalConstantIntegervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetLocalConstantIntegervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetLocalConstantIntegervEXT_Idx) = get_ts();
        }


	

}