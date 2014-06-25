#include <glTraceCommon.h>
#include <generated.h>

#define glGetTexLevelParameterfv_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTexLevelParameterfv_Idx))


GLAPI void  APIENTRY glGetTexLevelParameterfv(GLenum target,GLint level,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTexLevelParameterfv_Idx))
	{
            GL_ENTRY_PTR(glGetTexLevelParameterfv_Idx) = dlsym(RTLD_NEXT,"glGetTexLevelParameterfv");
            if(!GL_ENTRY_PTR(glGetTexLevelParameterfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTexLevelParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTexLevelParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTexLevelParameterfv_wrp(target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTexLevelParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTexLevelParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTexLevelParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTexLevelParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetTexLevelParameterfv_Idx));
        if(last_diff > 1000000000){
            printf("glGetTexLevelParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetTexLevelParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTexLevelParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTexLevelParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTexLevelParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTexLevelParameterfv_Idx) = get_ts();
        }


	

}