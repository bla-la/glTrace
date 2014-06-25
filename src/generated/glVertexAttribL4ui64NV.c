#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL4ui64NV_wrp						\
    ((void  (*)(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w                                        \
    ))GL_ENTRY_PTR(glVertexAttribL4ui64NV_Idx))


GLAPI void  APIENTRY glVertexAttribL4ui64NV(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL4ui64NV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL4ui64NV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL4ui64NV");
            if(!GL_ENTRY_PTR(glVertexAttribL4ui64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL4ui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL4ui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL4ui64NV_wrp(index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL4ui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL4ui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL4ui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL4ui64NV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL4ui64NV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL4ui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL4ui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL4ui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL4ui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL4ui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL4ui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL4ui64NV_Idx) = get_ts();
        }


	

}