#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glTexEnvxvOES_Idx))


GLAPI void  APIENTRY glTexEnvxvOES(GLenum target,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexEnvxvOES_Idx))
	{
            GL_ENTRY_PTR(glTexEnvxvOES_Idx) = dlsym(RTLD_NEXT,"glTexEnvxvOES");
            if(!GL_ENTRY_PTR(glTexEnvxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexEnvxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvxvOES_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexEnvxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvxvOES_Idx) = get_ts();
        }


	

}