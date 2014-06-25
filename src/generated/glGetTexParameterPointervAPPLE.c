#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterPointervAPPLE_wrp						\
    ((void  (*)(GLenum target,GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterPointervAPPLE_Idx))


GLAPI void  APIENTRY glGetTexParameterPointervAPPLE(GLenum target,GLenum pname,void **params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexParameterPointervAPPLE_Idx))
	{
            GL_ENTRY_PTR(glGetTexParameterPointervAPPLE_Idx) = dlsym(RTLD_NEXT,"glGetTexParameterPointervAPPLE");
            if(!GL_ENTRY_PTR(glGetTexParameterPointervAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexParameterPointervAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterPointervAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterPointervAPPLE_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterPointervAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterPointervAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterPointervAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterPointervAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterPointervAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexParameterPointervAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterPointervAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterPointervAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterPointervAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterPointervAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterPointervAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterPointervAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterPointervAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterPointervAPPLE_Idx) = get_ts();
        }


	

}