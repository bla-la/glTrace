#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribdvARB_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribdvARB_Idx))


GLAPI void  APIENTRY glGetVertexAttribdvARB(GLuint index,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribdvARB_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribdvARB_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribdvARB");
            if(!GL_ENTRY_PTR(glGetVertexAttribdvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribdvARB_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribdvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribdvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribdvARB_Idx) = get_ts();
        }


	

}