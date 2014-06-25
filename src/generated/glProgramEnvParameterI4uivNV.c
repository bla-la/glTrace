#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameterI4uivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameterI4uivNV_Idx))


GLAPI void  APIENTRY glProgramEnvParameterI4uivNV(GLenum target,GLuint index,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameterI4uivNV_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameterI4uivNV_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameterI4uivNV");
            if(!GL_ENTRY_PTR(glProgramEnvParameterI4uivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameterI4uivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameterI4uivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameterI4uivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameterI4uivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameterI4uivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameterI4uivNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameterI4uivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameterI4uivNV_Idx) = get_ts();
        }


	

}