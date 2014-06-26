#include <glTraceCommon.h>
#include <generated.h>

#define glGetFragDataLocationEXT_wrp						\
    ((GLint  (*)(GLuint program,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetFragDataLocationEXT_Idx))


GLAPI GLint  APIENTRY glGetFragDataLocationEXT(GLuint program,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFragDataLocationEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFragDataLocationEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetFragDataLocationEXT_wrp(program,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFragDataLocationEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFragDataLocationEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFragDataLocationEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFragDataLocationEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetFragDataLocationEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetFragDataLocationEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFragDataLocationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragDataLocationEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFragDataLocationEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFragDataLocationEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFragDataLocationEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFragDataLocationEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFragDataLocationEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFragDataLocationEXT_Idx) = get_ts();
        }


	return retval;

}