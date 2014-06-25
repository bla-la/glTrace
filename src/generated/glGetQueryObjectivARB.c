#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectivARB_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectivARB_Idx))


GLAPI void  APIENTRY glGetQueryObjectivARB(GLuint id,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryObjectivARB_Idx))
	{
            GL_ENTRY_PTR(glGetQueryObjectivARB_Idx) = dlsym(RTLD_NEXT,"glGetQueryObjectivARB");
            if(!GL_ENTRY_PTR(glGetQueryObjectivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryObjectivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectivARB_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectivARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryObjectivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectivARB_Idx) = get_ts();
        }


	

}