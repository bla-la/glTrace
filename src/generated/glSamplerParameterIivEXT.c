#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterIivEXT_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLint *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterIivEXT_Idx))


GLAPI void  APIENTRY glSamplerParameterIivEXT(GLuint sampler,GLenum pname,const GLint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSamplerParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterIivEXT_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterIivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSamplerParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterIivEXT_Idx) = get_ts();
        }


	

}