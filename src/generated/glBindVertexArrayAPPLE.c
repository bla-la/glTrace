#include <glTraceCommon.h>
#include <generated.h>

#define glBindVertexArrayAPPLE_wrp						\
    ((void  (*)(GLuint array                                        \
    ))GL_ENTRY_PTR(glBindVertexArrayAPPLE_Idx))


GLAPI void  APIENTRY glBindVertexArrayAPPLE(GLuint array)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindVertexArrayAPPLE_Idx))
	{
            GL_ENTRY_PTR(glBindVertexArrayAPPLE_Idx) = dlsym(RTLD_NEXT,"glBindVertexArrayAPPLE");
            if(!GL_ENTRY_PTR(glBindVertexArrayAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindVertexArrayAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVertexArrayAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVertexArrayAPPLE_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVertexArrayAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVertexArrayAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVertexArrayAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVertexArrayAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glBindVertexArrayAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glBindVertexArrayAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVertexArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexArrayAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexArrayAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVertexArrayAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVertexArrayAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVertexArrayAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVertexArrayAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVertexArrayAPPLE_Idx) = get_ts();
        }


	

}