#include <glTraceCommon.h>
#include <generated.h>

#define glGetRenderbufferParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetRenderbufferParameterivEXT_Idx))


GLAPI void  APIENTRY glGetRenderbufferParameterivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetRenderbufferParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetRenderbufferParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetRenderbufferParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetRenderbufferParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetRenderbufferParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetRenderbufferParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetRenderbufferParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetRenderbufferParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetRenderbufferParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetRenderbufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetRenderbufferParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetRenderbufferParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetRenderbufferParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetRenderbufferParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetRenderbufferParameterivEXT_Idx) = get_ts();
        }


	

}