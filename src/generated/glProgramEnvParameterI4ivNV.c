#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameterI4ivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLint *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameterI4ivNV_Idx))


GLAPI void  APIENTRY glProgramEnvParameterI4ivNV(GLenum target,GLuint index,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameterI4ivNV_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameterI4ivNV_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameterI4ivNV");
            if(!GL_ENTRY_PTR(glProgramEnvParameterI4ivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameterI4ivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameterI4ivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameterI4ivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameterI4ivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4ivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameterI4ivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameterI4ivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameterI4ivNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameterI4ivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4ivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4ivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4ivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4ivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameterI4ivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4ivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4ivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameterI4ivNV_Idx) = get_ts();
        }


	

}