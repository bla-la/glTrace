#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameter4fvEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameter4fvEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameter4fvEXT(GLuint program,GLenum target,GLuint index,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4fvEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameter4fvEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameter4fvEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4fvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameter4fvEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4fvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameter4fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fvEXT_Idx) = get_ts();
        }


	

}