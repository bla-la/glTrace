#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1ui64vARB_wrp						\
    ((void  (*)(GLuint index,const GLuint64EXT *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1ui64vARB_Idx))


GLAPI void  APIENTRY glVertexAttribL1ui64vARB(GLuint index,const GLuint64EXT *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL1ui64vARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL1ui64vARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL1ui64vARB");
            if(!GL_ENTRY_PTR(glVertexAttribL1ui64vARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL1ui64vARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1ui64vARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1ui64vARB_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1ui64vARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64vARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1ui64vARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1ui64vARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1ui64vARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL1ui64vARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64vARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64vARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1ui64vARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64vARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64vARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1ui64vARB_Idx) = get_ts();
        }


	

}