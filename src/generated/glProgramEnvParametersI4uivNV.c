#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParametersI4uivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLsizei count,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParametersI4uivNV_Idx))


GLAPI void  APIENTRY glProgramEnvParametersI4uivNV(GLenum target,GLuint index,GLsizei count,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParametersI4uivNV_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParametersI4uivNV_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParametersI4uivNV");
            if(!GL_ENTRY_PTR(glProgramEnvParametersI4uivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParametersI4uivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParametersI4uivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParametersI4uivNV_wrp(target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParametersI4uivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParametersI4uivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParametersI4uivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParametersI4uivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParametersI4uivNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParametersI4uivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParametersI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParametersI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParametersI4uivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParametersI4uivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParametersI4uivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParametersI4uivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParametersI4uivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParametersI4uivNV_Idx) = get_ts();
        }


	

}