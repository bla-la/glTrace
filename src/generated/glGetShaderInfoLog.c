#include <glTraceCommon.h>
#include <generated.h>

#define glGetShaderInfoLog_wrp						\
    ((void  (*)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog                                        \
    ))GL_ENTRY_PTR(glGetShaderInfoLog_Idx))


GLAPI void  APIENTRY glGetShaderInfoLog(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetShaderInfoLog_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetShaderInfoLog_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetShaderInfoLog_wrp(shader,bufSize,length,infoLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetShaderInfoLog_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetShaderInfoLog_Idx) ++;

        GL_ENTRY_LAST_TS(glGetShaderInfoLog_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetShaderInfoLog_Idx),
				 GL_ENTRY_LAST_TS(glGetShaderInfoLog_Idx));


        if(last_diff > 1000000000){
            printf("glGetShaderInfoLog %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetShaderInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderInfoLog_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetShaderInfoLog_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetShaderInfoLog_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetShaderInfoLog_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetShaderInfoLog_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetShaderInfoLog_Idx) = get_ts();
        }


	

}