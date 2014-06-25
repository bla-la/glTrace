#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameterI4uiNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameterI4uiNV_Idx))


GLAPI void  APIENTRY glProgramEnvParameterI4uiNV(GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameterI4uiNV_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameterI4uiNV_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameterI4uiNV");
            if(!GL_ENTRY_PTR(glProgramEnvParameterI4uiNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameterI4uiNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameterI4uiNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameterI4uiNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uiNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uiNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameterI4uiNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameterI4uiNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameterI4uiNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameterI4uiNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uiNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uiNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uiNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uiNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uiNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4uiNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4uiNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameterI4uiNV_Idx) = get_ts();
        }


	

}