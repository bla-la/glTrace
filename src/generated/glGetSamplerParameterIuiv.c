#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameterIuiv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameterIuiv_Idx))


GLAPI void  APIENTRY glGetSamplerParameterIuiv(GLuint sampler,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSamplerParameterIuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameterIuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameterIuiv_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameterIuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameterIuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameterIuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameterIuiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetSamplerParameterIuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameterIuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameterIuiv_Idx) = get_ts();
        }


	

}