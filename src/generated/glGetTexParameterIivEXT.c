#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterIivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterIivEXT_Idx))


GLAPI void  APIENTRY glGetTexParameterIivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterIivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterIivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterIivEXT_Idx) = get_ts();
        }


	

}