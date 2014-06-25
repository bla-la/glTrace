#include <glTraceCommon.h>
#include <generated.h>

#define glGetMinmaxParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetMinmaxParameteriv_Idx))


GLAPI void  APIENTRY glGetMinmaxParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetMinmaxParameteriv_Idx))
	{
            GL_ENTRY_PTR(glGetMinmaxParameteriv_Idx) = dlsym(RTLD_NEXT,"glGetMinmaxParameteriv");
            if(!GL_ENTRY_PTR(glGetMinmaxParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetMinmaxParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetMinmaxParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetMinmaxParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetMinmaxParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetMinmaxParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetMinmaxParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetMinmaxParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetMinmaxParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glGetMinmaxParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetMinmaxParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetMinmaxParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetMinmaxParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetMinmaxParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetMinmaxParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetMinmaxParameteriv_Idx) = get_ts();
        }


	

}