#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterf_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterf_Idx))


GLAPI void  APIENTRY glSamplerParameterf(GLuint sampler,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSamplerParameterf_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterf_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterf_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterf_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterf_Idx));


        if(last_diff > 1000000000){
            printf("glSamplerParameterf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterf_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterf_Idx) = get_ts();
        }


	

}