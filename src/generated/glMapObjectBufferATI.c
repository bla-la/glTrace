#include <glTraceCommon.h>
#include <generated.h>

#define glMapObjectBufferATI_wrp						\
    ((void * (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glMapObjectBufferATI_Idx))


GLAPI void * APIENTRY glMapObjectBufferATI(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapObjectBufferATI_Idx))
	{
            GL_ENTRY_PTR(glMapObjectBufferATI_Idx) = dlsym(RTLD_NEXT,"glMapObjectBufferATI");
            if(!GL_ENTRY_PTR(glMapObjectBufferATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapObjectBufferATI_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glMapObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glMapObjectBufferATI_Idx));
        if(last_diff > 1000000000){
            printf("glMapObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glMapObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glMapObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapObjectBufferATI_Idx) = get_ts();
        }


	return retval;

}