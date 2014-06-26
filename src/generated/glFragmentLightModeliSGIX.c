#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightModeliSGIX_wrp						\
    ((void  (*)(GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glFragmentLightModeliSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightModeliSGIX(GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightModeliSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightModeliSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightModeliSGIX_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightModeliSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightModeliSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightModeliSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightModeliSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightModeliSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightModeliSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightModeliSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModeliSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModeliSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightModeliSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightModeliSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightModeliSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightModeliSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightModeliSGIX_Idx) = get_ts();
        }


	

}