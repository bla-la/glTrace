#include <glTraceCommon.h>
#include <generated.h>

#define glGetHistogramParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetHistogramParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetHistogramParameterfvEXT(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetHistogramParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetHistogramParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetHistogramParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetHistogramParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetHistogramParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHistogramParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetHistogramParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHistogramParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHistogramParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHistogramParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHistogramParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetHistogramParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetHistogramParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHistogramParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHistogramParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHistogramParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHistogramParameterfvEXT_Idx) = get_ts();
        }


	

}