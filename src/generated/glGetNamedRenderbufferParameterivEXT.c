#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedRenderbufferParameterivEXT_wrp						\
    ((void  (*)(GLuint renderbuffer,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedRenderbufferParameterivEXT_Idx))


GLAPI void  APIENTRY glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedRenderbufferParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedRenderbufferParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedRenderbufferParameterivEXT");
            if(!GL_ENTRY_PTR(glGetNamedRenderbufferParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedRenderbufferParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedRenderbufferParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedRenderbufferParameterivEXT_wrp(renderbuffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedRenderbufferParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedRenderbufferParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedRenderbufferParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedRenderbufferParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedRenderbufferParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedRenderbufferParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedRenderbufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedRenderbufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedRenderbufferParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedRenderbufferParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedRenderbufferParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedRenderbufferParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedRenderbufferParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedRenderbufferParameterivEXT_Idx) = get_ts();
        }


	

}