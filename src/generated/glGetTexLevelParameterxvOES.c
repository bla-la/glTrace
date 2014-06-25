#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexLevelParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetTexLevelParameterxvOES_Idx))


GLAPI void  APIENTRY glGetTexLevelParameterxvOES(GLenum target,GLint level,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexLevelParameterxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetTexLevelParameterxvOES_Idx) = dlsym(RTLD_NEXT,"glGetTexLevelParameterxvOES");
            if(!GL_ENTRY_PTR(glGetTexLevelParameterxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexLevelParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexLevelParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexLevelParameterxvOES_wrp(target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexLevelParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexLevelParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexLevelParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexLevelParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetTexLevelParameterxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexLevelParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexLevelParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexLevelParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexLevelParameterxvOES_Idx) = get_ts();
        }


	

}