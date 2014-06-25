#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameteriv_Idx))


GLAPI void  APIENTRY glGetTexParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexParameteriv_Idx))
	{
            GL_ENTRY_PTR(glGetTexParameteriv_Idx) = dlsym(RTLD_NEXT,"glGetTexParameteriv");
            if(!GL_ENTRY_PTR(glGetTexParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameteriv_Idx) = get_ts();
        }


	

}