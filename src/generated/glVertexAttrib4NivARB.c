#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4NivARB_wrp						\
    ((void  (*)(GLuint index,const GLint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4NivARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4NivARB(GLuint index,const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4NivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4NivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4NivARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4NivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4NivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4NivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4NivARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4NivARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4NivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4NivARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4NivARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4NivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4NivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4NivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4NivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4NivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4NivARB_Idx) = get_ts();
        }


	

}