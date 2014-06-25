#include <glTraceCommon.h>
#include <generated.h>

#define glGenSamplers_wrp						\
    ((void  (*)(GLsizei count,GLuint *samplers                                        \
    ))GL_ENTRY_PTR(glGenSamplers_Idx))


GLAPI void  APIENTRY glGenSamplers(GLsizei count,GLuint *samplers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenSamplers_Idx))
	{
            GL_ENTRY_PTR(glGenSamplers_Idx) = dlsym(RTLD_NEXT,"glGenSamplers");
            if(!GL_ENTRY_PTR(glGenSamplers_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenSamplers_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenSamplers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenSamplers_wrp(count,samplers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenSamplers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenSamplers_Idx) ++;

        GL_ENTRY_LAST_TS(glGenSamplers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenSamplers_Idx),
				 GL_ENTRY_LAST_TS(glGenSamplers_Idx));
        if(last_diff > 1000000000){
            printf("glGenSamplers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glGenSamplers_Idx),
	             GL_ENTRY_CALL_TIME(glGenSamplers_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenSamplers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenSamplers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenSamplers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenSamplers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenSamplers_Idx) = get_ts();
        }


	

}