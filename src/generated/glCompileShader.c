#include <glTraceCommon.h>
#include <generated.h>

#define glCompileShader_wrp						\
    ((void  (*)(GLuint shader                                        \
    ))GL_ENTRY_PTR(glCompileShader_Idx))


GLAPI void  APIENTRY glCompileShader(GLuint shader)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompileShader_Idx))
	{
            GL_ENTRY_PTR(glCompileShader_Idx) = dlsym(RTLD_NEXT,"glCompileShader");
            if(!GL_ENTRY_PTR(glCompileShader_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompileShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompileShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompileShader_wrp(shader);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompileShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompileShader_Idx) ++;

        GL_ENTRY_LAST_TS(glCompileShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompileShader_Idx),
				 GL_ENTRY_LAST_TS(glCompileShader_Idx));
        if(last_diff > 1000000000){
            printf("glCompileShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompileShader_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShader_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompileShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompileShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompileShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompileShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompileShader_Idx) = get_ts();
        }


	

}