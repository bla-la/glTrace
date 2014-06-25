#include <glTraceCommon.h>
#include <generated.h>

#define glGetRenderbufferParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetRenderbufferParameteriv_Idx))


GLAPI void  APIENTRY glGetRenderbufferParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetRenderbufferParameteriv_Idx))
	{
            GL_ENTRY_PTR(glGetRenderbufferParameteriv_Idx) = dlsym(RTLD_NEXT,"glGetRenderbufferParameteriv");
            if(!GL_ENTRY_PTR(glGetRenderbufferParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetRenderbufferParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetRenderbufferParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetRenderbufferParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetRenderbufferParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetRenderbufferParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetRenderbufferParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetRenderbufferParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetRenderbufferParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glGetRenderbufferParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetRenderbufferParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetRenderbufferParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetRenderbufferParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetRenderbufferParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetRenderbufferParameteriv_Idx) = get_ts();
        }


	

}