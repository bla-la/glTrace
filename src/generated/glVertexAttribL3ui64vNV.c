#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribL3ui64vNV_wrp						\
    ((void  (*)(GLuint index,const GLuint64EXT *v                                        \
    ))GL_ENTRY_PTR(glVertexAttribL3ui64vNV_Idx))


GLAPI void  APIENTRY glVertexAttribL3ui64vNV(GLuint index,const GLuint64EXT *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribL3ui64vNV_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribL3ui64vNV_Idx) = dlsym(RTLD_NEXT,"glVertexAttribL3ui64vNV");
            if(!GL_ENTRY_PTR(glVertexAttribL3ui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribL3ui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribL3ui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribL3ui64vNV_wrp(index,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribL3ui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribL3ui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribL3ui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribL3ui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribL3ui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribL3ui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribL3ui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribL3ui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribL3ui64vNV_Idx) = get_ts();
        }


	

}