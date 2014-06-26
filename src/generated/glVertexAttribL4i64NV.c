#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL4i64NV_wrp						\
    ((void  (*)(GLuint index,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w                                        \
    ))GL_ENTRY_PTR(glVertexAttribL4i64NV_Idx))


GLAPI void  APIENTRY glVertexAttribL4i64NV(GLuint index,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribL4i64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL4i64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL4i64NV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL4i64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL4i64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL4i64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL4i64NV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL4i64NV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribL4i64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4i64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4i64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL4i64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL4i64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL4i64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL4i64NV_Idx) = get_ts();
        }


	

}