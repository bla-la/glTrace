#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL1i64vNV_wrp						\
    ((void  (*)(GLuint index,const GLint64EXT *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL1i64vNV_Idx))


GLAPI void  APIENTRY glVertexAttribL1i64vNV(GLuint index,const GLint64EXT *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL1i64vNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL1i64vNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL1i64vNV");
            if(!GL_ENTRY_PTR(glVertexAttribL1i64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL1i64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL1i64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL1i64vNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL1i64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL1i64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL1i64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL1i64vNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL1i64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL1i64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1i64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1i64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL1i64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL1i64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL1i64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL1i64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL1i64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL1i64vNV_Idx) = get_ts();
        }


	

}