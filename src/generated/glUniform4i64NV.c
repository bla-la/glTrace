#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4i64NV_wrp						\
    ((void  (*)(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w                                        \
    ))GL_ENTRY_PTR(glUniform4i64NV_Idx))


GLAPI void  APIENTRY glUniform4i64NV(GLint location,GLint64EXT x,GLint64EXT y,GLint64EXT z,GLint64EXT w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4i64NV_Idx))
	{
            GL_ENTRY_PTR(glUniform4i64NV_Idx) = dlsym(RTLD_NEXT,"glUniform4i64NV");
            if(!GL_ENTRY_PTR(glUniform4i64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4i64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4i64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4i64NV_wrp(location,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4i64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4i64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4i64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4i64NV_Idx),
				 GL_ENTRY_LAST_TS(glUniform4i64NV_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4i64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4i64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4i64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4i64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4i64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4i64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4i64NV_Idx) = get_ts();
        }


	

}