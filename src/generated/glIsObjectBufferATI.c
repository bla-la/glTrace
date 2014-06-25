#include <glTraceCommon.h>
#include <generated.h>

#define glIsObjectBufferATI_wrp						\
    ((GLboolean  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glIsObjectBufferATI_Idx))


GLAPI GLboolean  APIENTRY glIsObjectBufferATI(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsObjectBufferATI_Idx))
	{
            GL_ENTRY_PTR(glIsObjectBufferATI_Idx) = dlsym(RTLD_NEXT,"glIsObjectBufferATI");
            if(!GL_ENTRY_PTR(glIsObjectBufferATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsObjectBufferATI_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glIsObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glIsObjectBufferATI_Idx));
        if(last_diff > 1000000000){
            printf("glIsObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glIsObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glIsObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsObjectBufferATI_Idx) = get_ts();
        }


	return retval;

}