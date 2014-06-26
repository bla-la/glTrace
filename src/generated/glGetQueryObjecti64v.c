#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjecti64v_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLint64 *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjecti64v_Idx))


GLAPI void  APIENTRY glGetQueryObjecti64v(GLuint id,GLenum pname,GLint64 *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetQueryObjecti64v_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjecti64v_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjecti64v_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjecti64v_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjecti64v_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjecti64v_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjecti64v_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjecti64v_Idx));


        if(last_diff > 1000000000){
            printf("glGetQueryObjecti64v %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjecti64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjecti64v_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjecti64v_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjecti64v_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjecti64v_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjecti64v_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjecti64v_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjecti64v_Idx) = get_ts();
        }


	

}