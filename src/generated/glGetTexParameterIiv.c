#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterIiv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterIiv_Idx))


GLAPI void  APIENTRY glGetTexParameterIiv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexParameterIiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterIiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterIiv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterIiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterIiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterIiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterIiv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterIiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexParameterIiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterIiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterIiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterIiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterIiv_Idx) = get_ts();
        }


	

}