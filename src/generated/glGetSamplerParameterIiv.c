#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameterIiv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameterIiv_Idx))


GLAPI void  APIENTRY glGetSamplerParameterIiv(GLuint sampler,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSamplerParameterIiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameterIiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameterIiv_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameterIiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameterIiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameterIiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameterIiv_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameterIiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetSamplerParameterIiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameterIiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameterIiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameterIiv_Idx) = get_ts();
        }


	

}