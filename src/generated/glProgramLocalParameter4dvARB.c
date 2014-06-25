#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameter4dvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameter4dvARB_Idx))


GLAPI void  APIENTRY glProgramLocalParameter4dvARB(GLenum target,GLuint index,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramLocalParameter4dvARB_Idx))
	{
            GL_ENTRY_PTR(glProgramLocalParameter4dvARB_Idx) = dlsym(RTLD_NEXT,"glProgramLocalParameter4dvARB");
            if(!GL_ENTRY_PTR(glProgramLocalParameter4dvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramLocalParameter4dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameter4dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameter4dvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameter4dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameter4dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameter4dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameter4dvARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameter4dvARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramLocalParameter4dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameter4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameter4dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameter4dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameter4dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameter4dvARB_Idx) = get_ts();
        }


	

}