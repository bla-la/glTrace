#include <glTraceCommon.h>
#include <generated.h>

#define glGetShaderPrecisionFormat_wrp						\
    ((void  (*)(GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision                                        \
    ))GL_ENTRY_PTR(glGetShaderPrecisionFormat_Idx))


GLAPI void  APIENTRY glGetShaderPrecisionFormat(GLenum shadertype,GLenum precisiontype,GLint *range,GLint *precision)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetShaderPrecisionFormat_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetShaderPrecisionFormat_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetShaderPrecisionFormat_wrp(shadertype,precisiontype,range,precision);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetShaderPrecisionFormat_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetShaderPrecisionFormat_Idx) ++;

        GL_ENTRY_LAST_TS(glGetShaderPrecisionFormat_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetShaderPrecisionFormat_Idx),
				 GL_ENTRY_LAST_TS(glGetShaderPrecisionFormat_Idx));


        if(last_diff > 1000000000){
            printf("glGetShaderPrecisionFormat %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetShaderPrecisionFormat_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderPrecisionFormat_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderPrecisionFormat_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetShaderPrecisionFormat_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetShaderPrecisionFormat_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetShaderPrecisionFormat_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetShaderPrecisionFormat_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetShaderPrecisionFormat_Idx) = get_ts();
        }


	

}