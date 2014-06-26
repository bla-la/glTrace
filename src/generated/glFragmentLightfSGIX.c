#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightfSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glFragmentLightfSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightfSGIX(GLenum light,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightfSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightfSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightfSGIX_wrp(light,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightfSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightfSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightfSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightfSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightfSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightfSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightfSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightfSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightfSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightfSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightfSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightfSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightfSGIX_Idx) = get_ts();
        }


	

}