#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2ui64vNV_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint64EXT *value                                        \
    ))GL_ENTRY_PTR(glUniform2ui64vNV_Idx))


GLAPI void  APIENTRY glUniform2ui64vNV(GLint location,GLsizei count,const GLuint64EXT *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2ui64vNV_Idx))
	{
            GL_ENTRY_PTR(glUniform2ui64vNV_Idx) = dlsym(RTLD_NEXT,"glUniform2ui64vNV");
            if(!GL_ENTRY_PTR(glUniform2ui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2ui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2ui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2ui64vNV_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2ui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2ui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2ui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2ui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glUniform2ui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2ui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2ui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2ui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2ui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2ui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2ui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2ui64vNV_Idx) = get_ts();
        }


	

}