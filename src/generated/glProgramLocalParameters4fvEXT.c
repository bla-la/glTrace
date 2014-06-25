#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameters4fvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLsizei count,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameters4fvEXT_Idx))


GLAPI void  APIENTRY glProgramLocalParameters4fvEXT(GLenum target,GLuint index,GLsizei count,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramLocalParameters4fvEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramLocalParameters4fvEXT_Idx) = dlsym(RTLD_NEXT,"glProgramLocalParameters4fvEXT");
            if(!GL_ENTRY_PTR(glProgramLocalParameters4fvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramLocalParameters4fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameters4fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameters4fvEXT_wrp(target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameters4fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameters4fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameters4fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameters4fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameters4fvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramLocalParameters4fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameters4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameters4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameters4fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameters4fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameters4fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameters4fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameters4fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameters4fvEXT_Idx) = get_ts();
        }


	

}