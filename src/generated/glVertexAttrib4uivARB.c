#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4uivARB_wrp						\
    ((void  (*)(GLuint index,const GLuint *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4uivARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4uivARB(GLuint index,const GLuint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4uivARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4uivARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4uivARB");
            if(!GL_ENTRY_PTR(glVertexAttrib4uivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4uivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4uivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4uivARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4uivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4uivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4uivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4uivARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4uivARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4uivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4uivARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4uivARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4uivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4uivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4uivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4uivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4uivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4uivARB_Idx) = get_ts();
        }


	

}