#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameterIivEXT_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameterIivEXT_Idx))


GLAPI void  APIENTRY glGetSamplerParameterIivEXT(GLuint sampler,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetSamplerParameterIivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetSamplerParameterIivEXT_Idx) = dlsym(RTLD_NEXT,"glGetSamplerParameterIivEXT");
            if(!GL_ENTRY_PTR(glGetSamplerParameterIivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetSamplerParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameterIivEXT_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameterIivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetSamplerParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameterIivEXT_Idx) = get_ts();
        }


	

}