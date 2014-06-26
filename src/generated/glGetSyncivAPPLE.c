#include <glTraceCommon.h>
#include <generated.h>

#define glGetSyncivAPPLE_wrp						\
    ((void  (*)(GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values                                        \
    ))GL_ENTRY_PTR(glGetSyncivAPPLE_Idx))


GLAPI void  APIENTRY glGetSyncivAPPLE(GLsync sync,GLenum pname,GLsizei bufSize,GLsizei *length,GLint *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSyncivAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSyncivAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSyncivAPPLE_wrp(sync,pname,bufSize,length,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSyncivAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSyncivAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSyncivAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSyncivAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glGetSyncivAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glGetSyncivAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSyncivAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetSyncivAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glGetSyncivAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSyncivAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSyncivAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSyncivAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSyncivAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSyncivAPPLE_Idx) = get_ts();
        }


	

}