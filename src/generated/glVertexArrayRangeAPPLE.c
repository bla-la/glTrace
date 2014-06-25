#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayRangeAPPLE_wrp						\
    ((void  (*)(GLsizei length,void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexArrayRangeAPPLE_Idx))


GLAPI void  APIENTRY glVertexArrayRangeAPPLE(GLsizei length,void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayRangeAPPLE_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayRangeAPPLE_Idx) = dlsym(RTLD_NEXT,"glVertexArrayRangeAPPLE");
            if(!GL_ENTRY_PTR(glVertexArrayRangeAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayRangeAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayRangeAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayRangeAPPLE_wrp(length,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayRangeAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayRangeAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayRangeAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayRangeAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayRangeAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayRangeAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayRangeAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayRangeAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayRangeAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayRangeAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayRangeAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayRangeAPPLE_Idx) = get_ts();
        }


	

}