#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedBufferPointervEXT_wrp						\
    ((void  (*)(GLuint buffer,GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetNamedBufferPointervEXT_Idx))


GLAPI void  APIENTRY glGetNamedBufferPointervEXT(GLuint buffer,GLenum pname,void **params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedBufferPointervEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedBufferPointervEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedBufferPointervEXT");
            if(!GL_ENTRY_PTR(glGetNamedBufferPointervEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedBufferPointervEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedBufferPointervEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedBufferPointervEXT_wrp(buffer,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedBufferPointervEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedBufferPointervEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedBufferPointervEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedBufferPointervEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedBufferPointervEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedBufferPointervEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferPointervEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferPointervEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferPointervEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedBufferPointervEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedBufferPointervEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedBufferPointervEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedBufferPointervEXT_Idx) = get_ts();
        }


	

}