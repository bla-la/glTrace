#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformi64vNV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetUniformi64vNV_Idx))


GLAPI void  APIENTRY glGetUniformi64vNV(GLuint program,GLint location,GLint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformi64vNV_Idx))
	{
            GL_ENTRY_PTR(glGetUniformi64vNV_Idx) = dlsym(RTLD_NEXT,"glGetUniformi64vNV");
            if(!GL_ENTRY_PTR(glGetUniformi64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformi64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformi64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformi64vNV_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformi64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformi64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformi64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformi64vNV_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformi64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformi64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformi64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformi64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformi64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformi64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformi64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformi64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformi64vNV_Idx) = get_ts();
        }


	

}