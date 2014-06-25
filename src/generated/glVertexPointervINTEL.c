#include <glTraceCommon.h>
#include <generated.h>

#define glVertexPointervINTEL_wrp						\
    ((void  (*)(GLint size,GLenum type,const void **pointer                                        \
    ))GL_ENTRY_PTR(glVertexPointervINTEL_Idx))


GLAPI void  APIENTRY glVertexPointervINTEL(GLint size,GLenum type,const void **pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexPointervINTEL_Idx))
	{
            GL_ENTRY_PTR(glVertexPointervINTEL_Idx) = dlsym(RTLD_NEXT,"glVertexPointervINTEL");
            if(!GL_ENTRY_PTR(glVertexPointervINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexPointervINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexPointervINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexPointervINTEL_wrp(size,type,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexPointervINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexPointervINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexPointervINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexPointervINTEL_Idx),
				 GL_ENTRY_LAST_TS(glVertexPointervINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glVertexPointervINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointervINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glVertexPointervINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexPointervINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexPointervINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexPointervINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexPointervINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexPointervINTEL_Idx) = get_ts();
        }


	

}