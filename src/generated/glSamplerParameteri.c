#include <glTraceCommon.h>
#include <generated.h>

#define glSamplerParameteri_wrp						\
    ((void  (*)(GLuint sampler,GLenum pname,GLint param                                        \
    ))GL_ENTRY_PTR(glSamplerParameteri_Idx))


GLAPI void  APIENTRY glSamplerParameteri(GLuint sampler,GLenum pname,GLint param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSamplerParameteri_Idx))
	{
            GL_ENTRY_PTR(glSamplerParameteri_Idx) = dlsym(RTLD_NEXT,"glSamplerParameteri");
            if(!GL_ENTRY_PTR(glSamplerParameteri_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSamplerParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplerParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplerParameteri_wrp(sampler,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplerParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplerParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplerParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplerParameteri_Idx),
				 GL_ENTRY_LAST_TS(glSamplerParameteri_Idx));
        if(last_diff > 1000000000){
            printf("glSamplerParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplerParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glSamplerParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplerParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplerParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplerParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplerParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplerParameteri_Idx) = get_ts();
        }


	

}