#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1ui64ARB_wrp						\
    ((void  (*)(GLuint index,GLuint64EXT x                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1ui64ARB_Idx))


GLAPI void  APIENTRY glVertexAttribL1ui64ARB(GLuint index,GLuint64EXT x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL1ui64ARB_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL1ui64ARB_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL1ui64ARB");
            if(!GL_ENTRY_PTR(glVertexAttribL1ui64ARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL1ui64ARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1ui64ARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1ui64ARB_wrp(index,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1ui64ARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64ARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1ui64ARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1ui64ARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1ui64ARB_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL1ui64ARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64ARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64ARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1ui64ARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1ui64ARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1ui64ARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1ui64ARB_Idx) = get_ts();
        }


	

}