#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameter4dARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameter4dARB_Idx))


GLAPI void  APIENTRY glProgramEnvParameter4dARB(GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameter4dARB_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameter4dARB_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameter4dARB");
            if(!GL_ENTRY_PTR(glProgramEnvParameter4dARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameter4dARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameter4dARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameter4dARB_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameter4dARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameter4dARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameter4dARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameter4dARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameter4dARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameter4dARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameter4dARB_Idx) = get_ts();
        }


	

}