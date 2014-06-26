#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterIuivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterIuivEXT_Idx))


GLAPI void  APIENTRY glGetTexParameterIuivEXT(GLenum target,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTexParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterIuivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterIuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetTexParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterIuivEXT_Idx) = get_ts();
        }


	

}