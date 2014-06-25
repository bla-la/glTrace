#include <glTraceCommon.h>
#include <generated.h>

#define glIsBuffer_wrp						\
    ((GLboolean  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glIsBuffer_Idx))


GLAPI GLboolean  APIENTRY glIsBuffer(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsBuffer_Idx))
	{
            GL_ENTRY_PTR(glIsBuffer_Idx) = dlsym(RTLD_NEXT,"glIsBuffer");
            if(!GL_ENTRY_PTR(glIsBuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsBuffer_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glIsBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsBuffer_Idx),
				 GL_ENTRY_LAST_TS(glIsBuffer_Idx));
        if(last_diff > 1000000000){
            printf("glIsBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glIsBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsBuffer_Idx) = get_ts();
        }


	return retval;

}