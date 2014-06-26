#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightivSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glFragmentLightivSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightivSGIX(GLenum light,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightivSGIX_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightivSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightivSGIX_Idx) = get_ts();
        }


	

}