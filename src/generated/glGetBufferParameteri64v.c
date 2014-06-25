#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferParameteri64v_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint64 *params                                        \
    ))GL_ENTRY_PTR(glGetBufferParameteri64v_Idx))


GLAPI void  APIENTRY glGetBufferParameteri64v(GLenum target,GLenum pname,GLint64 *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBufferParameteri64v_Idx))
	{
            GL_ENTRY_PTR(glGetBufferParameteri64v_Idx) = dlsym(RTLD_NEXT,"glGetBufferParameteri64v");
            if(!GL_ENTRY_PTR(glGetBufferParameteri64v_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBufferParameteri64v_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferParameteri64v_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferParameteri64v_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferParameteri64v_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferParameteri64v_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferParameteri64v_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferParameteri64v_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferParameteri64v_Idx));
        if(last_diff > 1000000000){
            printf("glGetBufferParameteri64v %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferParameteri64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameteri64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferParameteri64v_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferParameteri64v_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferParameteri64v_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferParameteri64v_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferParameteri64v_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferParameteri64v_Idx) = get_ts();
        }


	

}