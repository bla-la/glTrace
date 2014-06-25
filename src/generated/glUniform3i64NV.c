#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3i64NV_wrp						\
    ((void  (*)(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z                                        \
    ))GL_ENTRY_PTR(glUniform3i64NV_Idx))


GLAPI void  APIENTRY glUniform3i64NV(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform3i64NV_Idx))
	{
            GL_ENTRY_PTR(glUniform3i64NV_Idx) = dlsym(RTLD_NEXT,"glUniform3i64NV");
            if(!GL_ENTRY_PTR(glUniform3i64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform3i64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3i64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3i64NV_wrp(location,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3i64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3i64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3i64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3i64NV_Idx),
				 GL_ENTRY_LAST_TS(glUniform3i64NV_Idx));
        if(last_diff > 1000000000){
            printf("glUniform3i64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3i64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3i64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3i64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3i64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3i64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3i64NV_Idx) = get_ts();
        }


	

}