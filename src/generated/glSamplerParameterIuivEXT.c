#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterIuivEXT_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLuint *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterIuivEXT_Idx))


GLAPI void  APIENTRY glSamplerParameterIuivEXT(GLuint sampler,GLenum pname,const GLuint *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSamplerParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterIuivEXT_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterIuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glSamplerParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterIuivEXT_Idx) = get_ts();
        }


	

}