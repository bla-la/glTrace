#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4dvARB_wrp						\
    ((void  (*)(GLuint index,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4dvARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4dvARB(GLuint index,const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4dvARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4dvARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4dvARB");
            if(!GL_ENTRY_PTR(glVertexAttrib4dvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4dvARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4dvARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4dvARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4dvARB_Idx) = get_ts();
        }


	

}