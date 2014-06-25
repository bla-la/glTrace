#include <glTraceCommon.h>
#include <generated.h>

#define glGetColorTableParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetColorTableParameteriv_Idx))


GLAPI void  APIENTRY glGetColorTableParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetColorTableParameteriv_Idx))
	{
            GL_ENTRY_PTR(glGetColorTableParameteriv_Idx) = dlsym(RTLD_NEXT,"glGetColorTableParameteriv");
            if(!GL_ENTRY_PTR(glGetColorTableParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetColorTableParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetColorTableParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetColorTableParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetColorTableParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetColorTableParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetColorTableParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetColorTableParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetColorTableParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glGetColorTableParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetColorTableParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetColorTableParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetColorTableParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetColorTableParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetColorTableParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetColorTableParameteriv_Idx) = get_ts();
        }


	

}