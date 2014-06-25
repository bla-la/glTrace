#include <glTraceCommon.h>
#include <generated.h>

#define glUnmapNamedBufferEXT_wrp						\
    ((GLboolean  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glUnmapNamedBufferEXT_Idx))


GLAPI GLboolean  APIENTRY glUnmapNamedBufferEXT(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUnmapNamedBufferEXT_Idx))
	{
            GL_ENTRY_PTR(glUnmapNamedBufferEXT_Idx) = dlsym(RTLD_NEXT,"glUnmapNamedBufferEXT");
            if(!GL_ENTRY_PTR(glUnmapNamedBufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUnmapNamedBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUnmapNamedBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glUnmapNamedBufferEXT_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUnmapNamedBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUnmapNamedBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUnmapNamedBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUnmapNamedBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glUnmapNamedBufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUnmapNamedBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUnmapNamedBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapNamedBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapNamedBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUnmapNamedBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUnmapNamedBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUnmapNamedBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUnmapNamedBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUnmapNamedBufferEXT_Idx) = get_ts();
        }


	return retval;

}