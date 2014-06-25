#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameteriv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLint *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameteriv_Idx))


GLAPI void  APIENTRY glSamplerParameteriv(GLuint sampler,GLenum pname,const GLint *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSamplerParameteriv_Idx))
	{
            GL_ENTRY_PTR(glSamplerParameteriv_Idx) = dlsym(RTLD_NEXT,"glSamplerParameteriv");
            if(!GL_ENTRY_PTR(glSamplerParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSamplerParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameteriv_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glSamplerParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameteriv_Idx) = get_ts();
        }


	

}