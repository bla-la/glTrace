#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameterfv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,const GLfloat *param                                        \
    ))GL_ENTRY_PTR(glSamplerParameterfv_Idx))


GLAPI void  APIENTRY glSamplerParameterfv(GLuint sampler,GLenum pname,const GLfloat *param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSamplerParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameterfv_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glSamplerParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameterfv_Idx) = get_ts();
        }


	

}