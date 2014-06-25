#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedBufferParameterivEXT_wrp						\
    ((void  (*)(GLuint buffer,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedBufferParameterivEXT_Idx))


GLAPI void  APIENTRY glGetNamedBufferParameterivEXT(GLuint buffer,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedBufferParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedBufferParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedBufferParameterivEXT");
            if(!GL_ENTRY_PTR(glGetNamedBufferParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedBufferParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedBufferParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedBufferParameterivEXT_wrp(buffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedBufferParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedBufferParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedBufferParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedBufferParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedBufferParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedBufferParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedBufferParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedBufferParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedBufferParameterivEXT_Idx) = get_ts();
        }


	

}