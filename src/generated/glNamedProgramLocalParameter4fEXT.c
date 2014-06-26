#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameter4fEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameter4fEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameter4fEXT(GLuint program,GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameter4fEXT_wrp(program,target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameter4fEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameter4fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameter4fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameter4fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameter4fEXT_Idx) = get_ts();
        }


	

}