#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterIiv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLint *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterIiv_Idx))


GLAPI void  APIENTRY glSamplerParameterIiv(GLuint sampler,GLenum pname,const GLint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSamplerParameterIiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterIiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterIiv_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterIiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterIiv_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterIiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterIiv_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterIiv_Idx));


        if(last_diff > 1000000000){
            printf("glSamplerParameterIiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIiv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterIiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterIiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterIiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterIiv_Idx) = get_ts();
        }


	

}