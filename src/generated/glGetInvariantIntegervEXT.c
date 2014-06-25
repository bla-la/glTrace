#include <glTraceCommon.h>
#include <generated.h>

#define glGetInvariantIntegervEXT_wrp						\
    ((void  (*)(GLuint id,GLenum value,GLint *data                                        \
    ))GL_ENTRY_PTR(glGetInvariantIntegervEXT_Idx))


GLAPI void  APIENTRY glGetInvariantIntegervEXT(GLuint id,GLenum value,GLint *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetInvariantIntegervEXT_Idx))
	{
            GL_ENTRY_PTR(glGetInvariantIntegervEXT_Idx) = dlsym(RTLD_NEXT,"glGetInvariantIntegervEXT");
            if(!GL_ENTRY_PTR(glGetInvariantIntegervEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetInvariantIntegervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetInvariantIntegervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetInvariantIntegervEXT_wrp(id,value,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetInvariantIntegervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetInvariantIntegervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetInvariantIntegervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetInvariantIntegervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetInvariantIntegervEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetInvariantIntegervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetInvariantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantIntegervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetInvariantIntegervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetInvariantIntegervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetInvariantIntegervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetInvariantIntegervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetInvariantIntegervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetInvariantIntegervEXT_Idx) = get_ts();
        }


	

}