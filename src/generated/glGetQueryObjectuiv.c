#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectuiv_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectuiv_Idx))


GLAPI void  APIENTRY glGetQueryObjectuiv(GLuint id,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryObjectuiv_Idx))
	{
            GL_ENTRY_PTR(glGetQueryObjectuiv_Idx) = dlsym(RTLD_NEXT,"glGetQueryObjectuiv");
            if(!GL_ENTRY_PTR(glGetQueryObjectuiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryObjectuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectuiv_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectuiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryObjectuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectuiv_Idx) = get_ts();
        }


	

}