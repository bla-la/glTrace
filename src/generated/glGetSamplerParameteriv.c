#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameteriv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameteriv_Idx))


GLAPI void  APIENTRY glGetSamplerParameteriv(GLuint sampler,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSamplerParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameteriv_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glGetSamplerParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameteriv_Idx) = get_ts();
        }


	

}