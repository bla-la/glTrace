#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3ui64NV_wrp						\
    ((void  (*)(GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z                                        \
    ))GL_ENTRY_PTR(glUniform3ui64NV_Idx))


GLAPI void  APIENTRY glUniform3ui64NV(GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform3ui64NV_Idx))
	{
            GL_ENTRY_PTR(glUniform3ui64NV_Idx) = dlsym(RTLD_NEXT,"glUniform3ui64NV");
            if(!GL_ENTRY_PTR(glUniform3ui64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform3ui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3ui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3ui64NV_wrp(location,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3ui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3ui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3ui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3ui64NV_Idx),
				 GL_ENTRY_LAST_TS(glUniform3ui64NV_Idx));
        if(last_diff > 1000000000){
            printf("glUniform3ui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3ui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3ui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3ui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3ui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3ui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3ui64NV_Idx) = get_ts();
        }


	

}