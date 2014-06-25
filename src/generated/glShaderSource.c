#include <glTraceCommon.h>
#include <generated.h>

#define glShaderSource_wrp						\
    ((void  (*)(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length                                        \
    ))GL_ENTRY_PTR(glShaderSource_Idx))


GLAPI void  APIENTRY glShaderSource(GLuint shader,GLsizei count,const GLchar *const*string,const GLint *length)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glShaderSource_Idx))
	{
            GL_ENTRY_PTR(glShaderSource_Idx) = dlsym(RTLD_NEXT,"glShaderSource");
            if(!GL_ENTRY_PTR(glShaderSource_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glShaderSource_Idx))
    	{
            GL_ENTRY_PREV_TS(glShaderSource_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glShaderSource_wrp(shader,count,string,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glShaderSource_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glShaderSource_Idx) ++;

        GL_ENTRY_LAST_TS(glShaderSource_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glShaderSource_Idx),
				 GL_ENTRY_LAST_TS(glShaderSource_Idx));
        if(last_diff > 1000000000){
            printf("glShaderSource %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glShaderSource_Idx),
	             GL_ENTRY_CALL_TIME(glShaderSource_Idx),
	             GL_ENTRY_CALL_TIME(glShaderSource_Idx) /
	             GL_ENTRY_CALL_COUNT(glShaderSource_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glShaderSource_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glShaderSource_Idx) = 0;
             GL_ENTRY_CALL_TIME(glShaderSource_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glShaderSource_Idx) = get_ts();
        }


	

}