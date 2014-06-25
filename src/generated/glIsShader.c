#include <glTraceCommon.h>
#include <generated.h>

#define glIsShader_wrp						\
    ((GLboolean  (*)(GLuint shader                                        \
    ))GL_ENTRY_PTR(glIsShader_Idx))


GLAPI GLboolean  APIENTRY glIsShader(GLuint shader)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsShader_Idx))
	{
            GL_ENTRY_PTR(glIsShader_Idx) = dlsym(RTLD_NEXT,"glIsShader");
            if(!GL_ENTRY_PTR(glIsShader_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsShader_wrp(shader);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsShader_Idx) ++;

        GL_ENTRY_LAST_TS(glIsShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsShader_Idx),
				 GL_ENTRY_LAST_TS(glIsShader_Idx));
        if(last_diff > 1000000000){
            printf("glIsShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsShader_Idx),
	             GL_ENTRY_CALL_TIME(glIsShader_Idx),
	             GL_ENTRY_CALL_TIME(glIsShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsShader_Idx) = get_ts();
        }


	return retval;

}