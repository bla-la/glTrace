#include <glTraceCommon.h>
#include <generated.h>

#define glUnmapObjectBufferATI_wrp						\
    ((void  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glUnmapObjectBufferATI_Idx))


GLAPI void  APIENTRY glUnmapObjectBufferATI(GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUnmapObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glUnmapObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUnmapObjectBufferATI_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUnmapObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUnmapObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glUnmapObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUnmapObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glUnmapObjectBufferATI_Idx));


        if(last_diff > 1000000000){
            printf("glUnmapObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUnmapObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glUnmapObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUnmapObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUnmapObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUnmapObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUnmapObjectBufferATI_Idx) = get_ts();
        }


	

}