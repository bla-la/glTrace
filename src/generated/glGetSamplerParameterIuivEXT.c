#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameterIuivEXT_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameterIuivEXT_Idx))


GLAPI void  APIENTRY glGetSamplerParameterIuivEXT(GLuint sampler,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSamplerParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameterIuivEXT_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameterIuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetSamplerParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameterIuivEXT_Idx) = get_ts();
        }


	

}