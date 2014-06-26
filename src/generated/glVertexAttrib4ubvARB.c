#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4ubvARB_wrp						\
    ((void  (*)(GLuint index,const GLubyte *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4ubvARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4ubvARB(GLuint index,const GLubyte *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4ubvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4ubvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4ubvARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4ubvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4ubvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4ubvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4ubvARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4ubvARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4ubvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4ubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4ubvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4ubvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4ubvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4ubvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4ubvARB_Idx) = get_ts();
        }


	

}