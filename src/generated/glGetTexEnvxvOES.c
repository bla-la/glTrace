#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexEnvxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetTexEnvxvOES_Idx))


GLAPI void  APIENTRY glGetTexEnvxvOES(GLenum target,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexEnvxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetTexEnvxvOES_Idx) = dlsym(RTLD_NEXT,"glGetTexEnvxvOES");
            if(!GL_ENTRY_PTR(glGetTexEnvxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexEnvxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexEnvxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexEnvxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexEnvxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexEnvxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexEnvxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexEnvxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexEnvxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexEnvxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexEnvxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexEnvxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexEnvxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexEnvxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexEnvxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexEnvxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexEnvxvOES_Idx) = get_ts();
        }


	

}