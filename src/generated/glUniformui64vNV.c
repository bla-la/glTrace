#include <glTraceCommon.h>
#include <generated.h>

#define glUniformui64vNV_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint64EXT *value                                        \
    ))GL_ENTRY_PTR(glUniformui64vNV_Idx))


GLAPI void  APIENTRY glUniformui64vNV(GLint location,GLsizei count,const GLuint64EXT *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformui64vNV_Idx))
	{
            GL_ENTRY_PTR(glUniformui64vNV_Idx) = dlsym(RTLD_NEXT,"glUniformui64vNV");
            if(!GL_ENTRY_PTR(glUniformui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformui64vNV_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glUniformui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glUniformui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glUniformui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glUniformui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformui64vNV_Idx) = get_ts();
        }


	

}