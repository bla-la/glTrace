#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragmentLightivSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFragmentLightivSGIX_Idx))


GLAPI void  APIENTRY glGetFragmentLightivSGIX(GLenum light,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFragmentLightivSGIX_Idx))
	{
            GL_ENTRY_PTR(glGetFragmentLightivSGIX_Idx) = dlsym(RTLD_NEXT,"glGetFragmentLightivSGIX");
            if(!GL_ENTRY_PTR(glGetFragmentLightivSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFragmentLightivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragmentLightivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFragmentLightivSGIX_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragmentLightivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragmentLightivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragmentLightivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragmentLightivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetFragmentLightivSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glGetFragmentLightivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragmentLightivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentLightivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentLightivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragmentLightivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragmentLightivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragmentLightivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragmentLightivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragmentLightivSGIX_Idx) = get_ts();
        }


	

}