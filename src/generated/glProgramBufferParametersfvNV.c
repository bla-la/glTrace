#include <glTraceCommon.h>
#include <generated.h>

#define glProgramBufferParametersfvNV_wrp						\
    ((void  (*)(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glProgramBufferParametersfvNV_Idx))


GLAPI void  APIENTRY glProgramBufferParametersfvNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramBufferParametersfvNV_Idx))
	{
            GL_ENTRY_PTR(glProgramBufferParametersfvNV_Idx) = dlsym(RTLD_NEXT,"glProgramBufferParametersfvNV");
            if(!GL_ENTRY_PTR(glProgramBufferParametersfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramBufferParametersfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramBufferParametersfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramBufferParametersfvNV_wrp(target,bindingIndex,wordIndex,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramBufferParametersfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramBufferParametersfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramBufferParametersfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramBufferParametersfvNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramBufferParametersfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramBufferParametersfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramBufferParametersfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramBufferParametersfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramBufferParametersfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramBufferParametersfvNV_Idx) = get_ts();
        }


	

}