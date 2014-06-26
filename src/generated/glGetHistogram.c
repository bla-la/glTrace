#include <glTraceCommon.h>
#include <generated.h>

#define glGetHistogram_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values                                        \
    ))GL_ENTRY_PTR(glGetHistogram_Idx))


GLAPI void  APIENTRY glGetHistogram(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetHistogram_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHistogram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetHistogram_wrp(target,reset,format,type,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHistogram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHistogram_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHistogram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHistogram_Idx),
				 GL_ENTRY_LAST_TS(glGetHistogram_Idx));


        if(last_diff > 1000000000){
            printf("glGetHistogram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogram_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogram_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHistogram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHistogram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHistogram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHistogram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHistogram_Idx) = get_ts();
        }


	

}