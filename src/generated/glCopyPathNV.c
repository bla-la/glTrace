#include <glTraceCommon.h>
#include <generated.h>

#define glCopyPathNV_wrp						\
    ((void  (*)(GLuint resultPath,GLuint srcPath                                        \
    ))GL_ENTRY_PTR(glCopyPathNV_Idx))


GLAPI void  APIENTRY glCopyPathNV(GLuint resultPath,GLuint srcPath)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyPathNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyPathNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyPathNV_wrp(resultPath,srcPath);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyPathNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyPathNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyPathNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyPathNV_Idx),
				 GL_ENTRY_LAST_TS(glCopyPathNV_Idx));


        if(last_diff > 1000000000){
            printf("glCopyPathNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glCopyPathNV_Idx),
	             GL_ENTRY_CALL_TIME(glCopyPathNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyPathNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyPathNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyPathNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyPathNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyPathNV_Idx) = get_ts();
        }


	

}