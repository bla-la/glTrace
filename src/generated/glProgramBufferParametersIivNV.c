#include <glTraceCommon.h>
#include <generated.h>

#define glProgramBufferParametersIivNV_wrp						\
    ((void  (*)(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLint *params                                        \
    ))GL_ENTRY_PTR(glProgramBufferParametersIivNV_Idx))


GLAPI void  APIENTRY glProgramBufferParametersIivNV(GLenum target,GLuint bindingIndex,GLuint wordIndex,GLsizei count,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramBufferParametersIivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramBufferParametersIivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramBufferParametersIivNV_wrp(target,bindingIndex,wordIndex,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramBufferParametersIivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramBufferParametersIivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramBufferParametersIivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramBufferParametersIivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramBufferParametersIivNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramBufferParametersIivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramBufferParametersIivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramBufferParametersIivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramBufferParametersIivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramBufferParametersIivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramBufferParametersIivNV_Idx) = get_ts();
        }


	

}