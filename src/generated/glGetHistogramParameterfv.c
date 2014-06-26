#include <glTraceCommon.h>
#include <generated.h>

#define glGetHistogramParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetHistogramParameterfv_Idx))


GLAPI void  APIENTRY glGetHistogramParameterfv(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetHistogramParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHistogramParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetHistogramParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHistogramParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHistogramParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHistogramParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHistogramParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetHistogramParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetHistogramParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHistogramParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHistogramParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHistogramParameterfv_Idx) = get_ts();
        }


	

}