#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameter4dEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameter4dEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameter4dEXT(GLuint program,GLenum target,GLuint index,GLdouble x,GLdouble y,GLdouble z,GLdouble w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4dEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameter4dEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameter4dEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameter4dEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameter4dEXT_wrp(program,target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4dEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameter4dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4dEXT_Idx) = get_ts();
        }


	

}