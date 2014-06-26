#include <glTraceCommon.h>
#include <generated.h>

#define glFragmentLightfvSGIX_wrp						\
    ((void  (*)(GLenum light,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glFragmentLightfvSGIX_Idx))


GLAPI void  APIENTRY glFragmentLightfvSGIX(GLenum light,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFragmentLightfvSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glFragmentLightfvSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFragmentLightfvSGIX_wrp(light,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFragmentLightfvSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFragmentLightfvSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glFragmentLightfvSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFragmentLightfvSGIX_Idx),
				 GL_ENTRY_LAST_TS(glFragmentLightfvSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glFragmentLightfvSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFragmentLightfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightfvSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glFragmentLightfvSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glFragmentLightfvSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFragmentLightfvSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFragmentLightfvSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFragmentLightfvSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFragmentLightfvSGIX_Idx) = get_ts();
        }


	

}