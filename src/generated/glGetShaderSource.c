#include <glTraceCommon.h>
#include <generated.h>

#define glGetShaderSource_wrp						\
    ((void  (*)(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source                                        \
    ))GL_ENTRY_PTR(glGetShaderSource_Idx))


GLAPI void  APIENTRY glGetShaderSource(GLuint shader,GLsizei bufSize,GLsizei *length,GLchar *source)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetShaderSource_Idx))
	{
            GL_ENTRY_PTR(glGetShaderSource_Idx) = dlsym(RTLD_NEXT,"glGetShaderSource");
            if(!GL_ENTRY_PTR(glGetShaderSource_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetShaderSource_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetShaderSource_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetShaderSource_wrp(shader,bufSize,length,source);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetShaderSource_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetShaderSource_Idx) ++;

        GL_ENTRY_LAST_TS(glGetShaderSource_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetShaderSource_Idx),
				 GL_ENTRY_LAST_TS(glGetShaderSource_Idx));
        if(last_diff > 1000000000){
            printf("glGetShaderSource %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetShaderSource_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderSource_Idx),
	             GL_ENTRY_CALL_TIME(glGetShaderSource_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetShaderSource_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetShaderSource_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetShaderSource_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetShaderSource_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetShaderSource_Idx) = get_ts();
        }


	

}