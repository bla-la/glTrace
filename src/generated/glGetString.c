#include <glTraceCommon.h>
#include <generated.h>

#define glGetString_wrp						\
    ((const GLubyte * (*)(GLenum name                                        \
    ))GL_ENTRY_PTR(glGetString_Idx))


GLAPI const GLubyte * APIENTRY glGetString(GLenum name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetString_Idx))
	{
            GL_ENTRY_PTR(glGetString_Idx) = dlsym(RTLD_NEXT,"glGetString");
            if(!GL_ENTRY_PTR(glGetString_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetString_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetString_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	const GLubyte * retval = glGetString_wrp(name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetString_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetString_Idx) ++;

        GL_ENTRY_LAST_TS(glGetString_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetString_Idx),
				 GL_ENTRY_LAST_TS(glGetString_Idx));
        if(last_diff > 1000000000){
            printf("glGetString %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetString_Idx),
	             GL_ENTRY_CALL_TIME(glGetString_Idx),
	             GL_ENTRY_CALL_TIME(glGetString_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetString_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetString_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetString_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetString_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetString_Idx) = get_ts();
        }


	return retval;

}