#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameterI4iNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameterI4iNV_Idx))


GLAPI void  APIENTRY glProgramEnvParameterI4iNV(GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameterI4iNV_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameterI4iNV_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameterI4iNV");
            if(!GL_ENTRY_PTR(glProgramEnvParameterI4iNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameterI4iNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameterI4iNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameterI4iNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameterI4iNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4iNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameterI4iNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameterI4iNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameterI4iNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameterI4iNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4iNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4iNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4iNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4iNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameterI4iNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameterI4iNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameterI4iNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameterI4iNV_Idx) = get_ts();
        }


	

}