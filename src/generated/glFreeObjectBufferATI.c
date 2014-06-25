#include <glTraceCommon.h>
#include <generated.h>

#define glFreeObjectBufferATI_wrp						\
    ((void  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glFreeObjectBufferATI_Idx))


GLAPI void  APIENTRY glFreeObjectBufferATI(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFreeObjectBufferATI_Idx))
	{
            GL_ENTRY_PTR(glFreeObjectBufferATI_Idx) = dlsym(RTLD_NEXT,"glFreeObjectBufferATI");
            if(!GL_ENTRY_PTR(glFreeObjectBufferATI_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFreeObjectBufferATI_Idx))
    	{
            GL_ENTRY_PREV_TS(glFreeObjectBufferATI_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFreeObjectBufferATI_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFreeObjectBufferATI_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFreeObjectBufferATI_Idx) ++;

        GL_ENTRY_LAST_TS(glFreeObjectBufferATI_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFreeObjectBufferATI_Idx),
				 GL_ENTRY_LAST_TS(glFreeObjectBufferATI_Idx));
        if(last_diff > 1000000000){
            printf("glFreeObjectBufferATI %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFreeObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glFreeObjectBufferATI_Idx),
	             GL_ENTRY_CALL_TIME(glFreeObjectBufferATI_Idx) /
	             GL_ENTRY_CALL_COUNT(glFreeObjectBufferATI_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFreeObjectBufferATI_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFreeObjectBufferATI_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFreeObjectBufferATI_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFreeObjectBufferATI_Idx) = get_ts();
        }


	

}