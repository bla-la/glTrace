#include <glTraceCommon.h>
#include <generated.h>

#define glGetFramebufferParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFramebufferParameteriv_Idx))


GLAPI void  APIENTRY glGetFramebufferParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFramebufferParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFramebufferParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFramebufferParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFramebufferParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFramebufferParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFramebufferParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFramebufferParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetFramebufferParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glGetFramebufferParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFramebufferParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFramebufferParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFramebufferParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFramebufferParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFramebufferParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFramebufferParameteriv_Idx) = get_ts();
        }


	

}