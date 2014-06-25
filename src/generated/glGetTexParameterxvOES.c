#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetTexParameterxvOES_Idx))


GLAPI void  APIENTRY glGetTexParameterxvOES(GLenum target,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexParameterxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetTexParameterxvOES_Idx) = dlsym(RTLD_NEXT,"glGetTexParameterxvOES");
            if(!GL_ENTRY_PTR(glGetTexParameterxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexParameterxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexParameterxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexParameterxvOES_Idx) = get_ts();
        }


	

}