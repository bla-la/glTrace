#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib4NbvARB_wrp						\
    ((void  (*)(GLuint index,const GLbyte *v                                        \
    ))GL_ENTRY_PTR(glVertexAttrib4NbvARB_Idx))


GLAPI void  APIENTRY glVertexAttrib4NbvARB(GLuint index,const GLbyte *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib4NbvARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib4NbvARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib4NbvARB");
            if(!GL_ENTRY_PTR(glVertexAttrib4NbvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib4NbvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib4NbvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib4NbvARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib4NbvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib4NbvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib4NbvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib4NbvARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib4NbvARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib4NbvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4NbvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4NbvARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib4NbvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib4NbvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib4NbvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib4NbvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib4NbvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib4NbvARB_Idx) = get_ts();
        }


	

}