#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL3ui64NV_wrp						\
    ((void  (*)(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z                                        \
    ))GL_ENTRY_PTR(glVertexAttribL3ui64NV_Idx))


GLAPI void  APIENTRY glVertexAttribL3ui64NV(GLuint index,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL3ui64NV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL3ui64NV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL3ui64NV");
            if(!GL_ENTRY_PTR(glVertexAttribL3ui64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL3ui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL3ui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL3ui64NV_wrp(index,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL3ui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL3ui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL3ui64NV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL3ui64NV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL3ui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL3ui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL3ui64NV_Idx) = get_ts();
        }


	

}