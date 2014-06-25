#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragmentLightfvSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetFragmentLightfvSGIX_Idx))


GLAPI void  APIENTRY glGetFragmentLightfvSGIX(GLenum light,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFragmentLightfvSGIX_Idx))
	{
            GL_ENTRY_PTR(glGetFragmentLightfvSGIX_Idx) = dlsym(RTLD_NEXT,"glGetFragmentLightfvSGIX");
            if(!GL_ENTRY_PTR(glGetFragmentLightfvSGIX_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFragmentLightfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragmentLightfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFragmentLightfvSGIX_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragmentLightfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragmentLightfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragmentLightfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragmentLightfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glGetFragmentLightfvSGIX_Idx));
        if(last_diff > 1000000000){
            printf("glGetFragmentLightfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragmentLightfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentLightfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragmentLightfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragmentLightfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragmentLightfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragmentLightfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragmentLightfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragmentLightfvSGIX_Idx) = get_ts();
        }


	

}