#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4fARB_wrp						\
    ((void  (*)(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4fARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4fARB(GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4fARB_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4fARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4fARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4fARB_Idx) = get_ts();
        }


	

}