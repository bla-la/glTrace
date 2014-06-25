#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryObjectuivEXT_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryObjectuivEXT_Idx))


GLAPI void  APIENTRY glGetQueryObjectuivEXT(GLuint id,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryObjectuivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetQueryObjectuivEXT_Idx) = dlsym(RTLD_NEXT,"glGetQueryObjectuivEXT");
            if(!GL_ENTRY_PTR(glGetQueryObjectuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryObjectuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryObjectuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryObjectuivEXT_wrp(id,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryObjectuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryObjectuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryObjectuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryObjectuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryObjectuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryObjectuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryObjectuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryObjectuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryObjectuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryObjectuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryObjectuivEXT_Idx) = get_ts();
        }


	

}