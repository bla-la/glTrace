#include <glTraceCommon.h>
#include <generated.h>

#define glTexEnvxOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glTexEnvxOES_Idx))


GLAPI void  APIENTRY glTexEnvxOES(GLenum target,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexEnvxOES_Idx))
	{
            GL_ENTRY_PTR(glTexEnvxOES_Idx) = dlsym(RTLD_NEXT,"glTexEnvxOES");
            if(!GL_ENTRY_PTR(glTexEnvxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexEnvxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexEnvxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexEnvxOES_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexEnvxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexEnvxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexEnvxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexEnvxOES_Idx),
				 GL_ENTRY_LAST_TS(glTexEnvxOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexEnvxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexEnvxOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexEnvxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexEnvxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexEnvxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexEnvxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexEnvxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexEnvxOES_Idx) = get_ts();
        }


	

}