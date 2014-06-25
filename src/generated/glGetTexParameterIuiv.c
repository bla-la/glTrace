#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterIuiv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterIuiv_Idx))


GLAPI void  APIENTRY glGetTexParameterIuiv(GLenum target,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexParameterIuiv_Idx))
	{
            GL_ENTRY_PTR(glGetTexParameterIuiv_Idx) = dlsym(RTLD_NEXT,"glGetTexParameterIuiv");
            if(!GL_ENTRY_PTR(glGetTexParameterIuiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexParameterIuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterIuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterIuiv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterIuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterIuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterIuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterIuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterIuiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexParameterIuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterIuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterIuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterIuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterIuiv_Idx) = get_ts();
        }


	

}