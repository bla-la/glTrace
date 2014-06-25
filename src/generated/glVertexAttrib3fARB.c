#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3fARB_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y,GLfloat z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3fARB_Idx))


GLAPI void  APIENTRY glVertexAttrib3fARB(GLuint index,GLfloat x,GLfloat y,GLfloat z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib3fARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib3fARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib3fARB");
            if(!GL_ENTRY_PTR(glVertexAttrib3fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib3fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3fARB_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3fARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3fARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib3fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3fARB_Idx) = get_ts();
        }


	

}