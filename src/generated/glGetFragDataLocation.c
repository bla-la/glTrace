#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragDataLocation_wrp						\
    ((GLint  (*)(GLuint program,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetFragDataLocation_Idx))


GLAPI GLint  APIENTRY glGetFragDataLocation(GLuint program,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFragDataLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragDataLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetFragDataLocation_wrp(program,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragDataLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragDataLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragDataLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragDataLocation_Idx),
				 GL_ENTRY_LAST_TS(glGetFragDataLocation_Idx));


        if(last_diff > 1000000000){
            printf("glGetFragDataLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragDataLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragDataLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragDataLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragDataLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragDataLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragDataLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragDataLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragDataLocation_Idx) = get_ts();
        }


	return retval;

}