#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectuivARB_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectuivARB_Idx))


GLAPI void  APIENTRY glGetQueryObjectuivARB(GLuint id,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetQueryObjectuivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectuivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectuivARB_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectuivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectuivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectuivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectuivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectuivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetQueryObjectuivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectuivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectuivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectuivARB_Idx) = get_ts();
        }


	

}