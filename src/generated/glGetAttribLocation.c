#include <glTraceCommon.h>
#include <generated.h>

#define glGetAttribLocation_wrp						\
    ((GLint  (*)(GLuint program,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetAttribLocation_Idx))


GLAPI GLint  APIENTRY glGetAttribLocation(GLuint program,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetAttribLocation_Idx))
	{
            GL_ENTRY_PTR(glGetAttribLocation_Idx) = dlsym(RTLD_NEXT,"glGetAttribLocation");
            if(!GL_ENTRY_PTR(glGetAttribLocation_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetAttribLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetAttribLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetAttribLocation_wrp(program,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetAttribLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetAttribLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glGetAttribLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetAttribLocation_Idx),
				 GL_ENTRY_LAST_TS(glGetAttribLocation_Idx));
        if(last_diff > 1000000000){
            printf("glGetAttribLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetAttribLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttribLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttribLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetAttribLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetAttribLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetAttribLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetAttribLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetAttribLocation_Idx) = get_ts();
        }


	return retval;

}