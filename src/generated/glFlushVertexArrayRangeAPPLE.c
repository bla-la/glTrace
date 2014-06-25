#include <glTraceCommon.h>
#include <generated.h>

#define glFlushVertexArrayRangeAPPLE_wrp						\
    ((void  (*)(GLsizei length,void *pointer                                        \
    ))GL_ENTRY_PTR(glFlushVertexArrayRangeAPPLE_Idx))


GLAPI void  APIENTRY glFlushVertexArrayRangeAPPLE(GLsizei length,void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFlushVertexArrayRangeAPPLE_Idx))
	{
            GL_ENTRY_PTR(glFlushVertexArrayRangeAPPLE_Idx) = dlsym(RTLD_NEXT,"glFlushVertexArrayRangeAPPLE");
            if(!GL_ENTRY_PTR(glFlushVertexArrayRangeAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFlushVertexArrayRangeAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushVertexArrayRangeAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushVertexArrayRangeAPPLE_wrp(length,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushVertexArrayRangeAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushVertexArrayRangeAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushVertexArrayRangeAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushVertexArrayRangeAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glFlushVertexArrayRangeAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glFlushVertexArrayRangeAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushVertexArrayRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFlushVertexArrayRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFlushVertexArrayRangeAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushVertexArrayRangeAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushVertexArrayRangeAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushVertexArrayRangeAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushVertexArrayRangeAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushVertexArrayRangeAPPLE_Idx) = get_ts();
        }


	

}