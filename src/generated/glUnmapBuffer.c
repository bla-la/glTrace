#include <glTraceCommon.h>
#include <generated.h>

#define glUnmapBuffer_wrp						\
    ((GLboolean  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glUnmapBuffer_Idx))


GLAPI GLboolean  APIENTRY glUnmapBuffer(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUnmapBuffer_Idx))
	{
            GL_ENTRY_PTR(glUnmapBuffer_Idx) = dlsym(RTLD_NEXT,"glUnmapBuffer");
            if(!GL_ENTRY_PTR(glUnmapBuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUnmapBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glUnmapBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glUnmapBuffer_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUnmapBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUnmapBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glUnmapBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUnmapBuffer_Idx),
				 GL_ENTRY_LAST_TS(glUnmapBuffer_Idx));
        if(last_diff > 1000000000){
            printf("glUnmapBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUnmapBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glUnmapBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUnmapBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUnmapBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUnmapBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUnmapBuffer_Idx) = get_ts();
        }


	return retval;

}