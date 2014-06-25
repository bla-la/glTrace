#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttrib3sARB_wrp						\
    ((void  (*)(GLuint index,GLshort x,GLshort y,GLshort z                                        \
    ))GL_ENTRY_PTR(glVertexAttrib3sARB_Idx))


GLAPI void  APIENTRY glVertexAttrib3sARB(GLuint index,GLshort x,GLshort y,GLshort z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttrib3sARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttrib3sARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttrib3sARB");
            if(!GL_ENTRY_PTR(glVertexAttrib3sARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttrib3sARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttrib3sARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttrib3sARB_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttrib3sARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttrib3sARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttrib3sARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttrib3sARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttrib3sARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttrib3sARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3sARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3sARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttrib3sARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttrib3sARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttrib3sARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttrib3sARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttrib3sARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttrib3sARB_Idx) = get_ts();
        }


	

}