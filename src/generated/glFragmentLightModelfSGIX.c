#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightModelfSGIX_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glFragmentLightModelfSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightModelfSGIX(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightModelfSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightModelfSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightModelfSGIX_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightModelfSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightModelfSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightModelfSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightModelfSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightModelfSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightModelfSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightModelfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModelfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightModelfSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightModelfSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightModelfSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightModelfSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightModelfSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightModelfSGIX_Idx) = get_ts();
        }


	

}