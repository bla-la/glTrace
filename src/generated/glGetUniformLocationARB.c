#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformLocationARB_wrp						\
    ((GLint  (*)(GLhandleARB programObj,const GLcharARB *name                                        \
    ))GL_ENTRY_PTR(glGetUniformLocationARB_Idx))


GLAPI GLint  APIENTRY glGetUniformLocationARB(GLhandleARB programObj,const GLcharARB *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformLocationARB_Idx))
	{
            GL_ENTRY_PTR(glGetUniformLocationARB_Idx) = dlsym(RTLD_NEXT,"glGetUniformLocationARB");
            if(!GL_ENTRY_PTR(glGetUniformLocationARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformLocationARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformLocationARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetUniformLocationARB_wrp(programObj,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformLocationARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformLocationARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformLocationARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformLocationARB_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformLocationARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformLocationARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformLocationARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformLocationARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformLocationARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformLocationARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformLocationARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformLocationARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformLocationARB_Idx) = get_ts();
        }


	return retval;

}