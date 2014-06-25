#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformui64vNV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetUniformui64vNV_Idx))


GLAPI void  APIENTRY glGetUniformui64vNV(GLuint program,GLint location,GLuint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformui64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetUniformui64vNV_Idx) = dlsym(RTLD_NEXT,"glGetUniformui64vNV");
            if(!GL_ENTRY_PTR(glGetUniformui64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformui64vNV_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformui64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformui64vNV_Idx) = get_ts();
        }


	

}