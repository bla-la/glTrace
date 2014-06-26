#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightiSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glFragmentLightiSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightiSGIX(GLenum light,GLenum pname,GLint param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightiSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightiSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightiSGIX_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightiSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightiSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightiSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightiSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightiSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightiSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightiSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightiSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightiSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightiSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightiSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightiSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightiSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightiSGIX_Idx) = get_ts();
        }


	

}