#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameter4dvEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameter4dvEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameter4dvEXT(GLuint program,GLenum target,GLuint index,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4dvEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameter4dvEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameter4dvEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4dvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameter4dvEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4dvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameter4dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dvEXT_Idx) = get_ts();
        }


	

}