#include <glTraceCommon.h>
#include <generated.h>

#define glProgramBufferParametersIuivNV_wrp						\
    ((void  (*)(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glProgramBufferParametersIuivNV_Idx))


GLAPI void  APIENTRY glProgramBufferParametersIuivNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramBufferParametersIuivNV_Idx))
	{
            GL_ENTRY_PTR(glProgramBufferParametersIuivNV_Idx) = dlsym(RTLD_NEXT,"glProgramBufferParametersIuivNV");
            if(!GL_ENTRY_PTR(glProgramBufferParametersIuivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramBufferParametersIuivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramBufferParametersIuivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramBufferParametersIuivNV_wrp(target,bindingIndex,wordIndex,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramBufferParametersIuivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramBufferParametersIuivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramBufferParametersIuivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramBufferParametersIuivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramBufferParametersIuivNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramBufferParametersIuivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersIuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersIuivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIuivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramBufferParametersIuivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIuivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramBufferParametersIuivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramBufferParametersIuivNV_Idx) = get_ts();
        }


	

}