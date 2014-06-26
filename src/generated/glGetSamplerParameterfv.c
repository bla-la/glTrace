#include <glTraceCommon.h>
#include <generated.h>

#define glGetSamplerParameterfv_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetSamplerParameterfv_Idx))


GLAPI void  APIENTRY glGetSamplerParameterfv(GLuint sampler,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSamplerParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSamplerParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetSamplerParameterfv_wrp(sampler,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSamplerParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSamplerParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSamplerParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSamplerParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetSamplerParameterfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetSamplerParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetSamplerParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSamplerParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSamplerParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSamplerParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSamplerParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSamplerParameterfv_Idx) = get_ts();
        }


	

}