#include <glTraceCommon.h>
#include <generated.h>

#define glMapNamedBufferEXT_wrp						\
    ((void * (*)(GLuint buffer,GLenum access                                        \
    ))GL_ENTRY_PTR(glMapNamedBufferEXT_Idx))


GLAPI void * APIENTRY glMapNamedBufferEXT(GLuint buffer,GLenum access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapNamedBufferEXT_Idx))
	{
            GL_ENTRY_PTR(glMapNamedBufferEXT_Idx) = dlsym(RTLD_NEXT,"glMapNamedBufferEXT");
            if(!GL_ENTRY_PTR(glMapNamedBufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapNamedBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapNamedBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapNamedBufferEXT_wrp(buffer,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapNamedBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapNamedBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMapNamedBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapNamedBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glMapNamedBufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMapNamedBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapNamedBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapNamedBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapNamedBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapNamedBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapNamedBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapNamedBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapNamedBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapNamedBufferEXT_Idx) = get_ts();
        }


	return retval;

}