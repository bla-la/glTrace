#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterIuiv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLuint *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterIuiv_Idx))


GLAPI void  APIENTRY glSamplerParameterIuiv(GLuint sampler,GLenum pname,const GLuint *param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSamplerParameterIuiv_Idx))
	{
            GL_ENTRY_PTR(glSamplerParameterIuiv_Idx) = dlsym(RTLD_NEXT,"glSamplerParameterIuiv");
            if(!GL_ENTRY_PTR(glSamplerParameterIuiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSamplerParameterIuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterIuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterIuiv_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterIuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterIuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterIuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterIuiv_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterIuiv_Idx));
        if(last_diff > 1000000000){
            printf("glSamplerParameterIuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterIuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterIuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterIuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterIuiv_Idx) = get_ts();
        }


	

}