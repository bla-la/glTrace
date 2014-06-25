#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectui64v_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLuint64 *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectui64v_Idx))


GLAPI void  APIENTRY glGetQueryObjectui64v(GLuint id,GLenum pname,GLuint64 *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryObjectui64v_Idx))
	{
            GL_ENTRY_PTR(glGetQueryObjectui64v_Idx) = dlsym(RTLD_NEXT,"glGetQueryObjectui64v");
            if(!GL_ENTRY_PTR(glGetQueryObjectui64v_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryObjectui64v_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectui64v_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectui64v_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectui64v_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectui64v_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectui64v_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectui64v_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectui64v_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryObjectui64v %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectui64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectui64v_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64v_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectui64v_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectui64v_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectui64v_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectui64v_Idx) = get_ts();
        }


	

}