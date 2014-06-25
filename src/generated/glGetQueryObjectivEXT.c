#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectivEXT_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectivEXT_Idx))


GLAPI void  APIENTRY glGetQueryObjectivEXT(GLuint id,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryObjectivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetQueryObjectivEXT_Idx) = dlsym(RTLD_NEXT,"glGetQueryObjectivEXT");
            if(!GL_ENTRY_PTR(glGetQueryObjectivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryObjectivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectivEXT_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryObjectivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectivEXT_Idx) = get_ts();
        }


	

}