#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4svARB_wrp						\
    ((void  (*)(GLuint index,const GLshort *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4svARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4svARB(GLuint index,const GLshort *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttrib4svARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4svARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4svARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4svARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4svARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4svARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4svARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4svARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttrib4svARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4svARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4svARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4svARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4svARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4svARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4svARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4svARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4svARB_Idx) = get_ts();
        }


	

}