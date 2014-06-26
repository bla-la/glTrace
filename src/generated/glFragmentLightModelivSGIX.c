#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightModelivSGIX_wrp						\
    ((void  (*)(GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glFragmentLightModelivSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightModelivSGIX(GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightModelivSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightModelivSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightModelivSGIX_wrp(pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightModelivSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightModelivSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightModelivSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightModelivSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightModelivSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightModelivSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightModelivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModelivSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModelivSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightModelivSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightModelivSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightModelivSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightModelivSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightModelivSGIX_Idx) = get_ts();
        }


	

}