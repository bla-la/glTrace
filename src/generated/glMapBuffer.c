#include <glTraceCommon.h>
#include <generated.h>

#define glMapBuffer_wrp						\
    ((void * (*)(GLenum target,GLenum access                                        \
    ))GL_ENTRY_PTR(glMapBuffer_Idx))


GLAPI void * APIENTRY glMapBuffer(GLenum target,GLenum access)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapBuffer_wrp(target,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glMapBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapBuffer_Idx),
				 GL_ENTRY_LAST_TS(glMapBuffer_Idx));


        if(last_diff > 1000000000){
            printf("glMapBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glMapBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glMapBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapBuffer_Idx) = get_ts();
        }


	return retval;

}