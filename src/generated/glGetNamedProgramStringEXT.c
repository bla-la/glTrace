#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramStringEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLenum pname,void *string                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramStringEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramStringEXT(GLuint program,GLenum target,GLenum pname,void *string)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedProgramStringEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramStringEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramStringEXT_wrp(program,target,pname,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramStringEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramStringEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramStringEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramStringEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramStringEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedProgramStringEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramStringEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramStringEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramStringEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramStringEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramStringEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramStringEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramStringEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramStringEXT_Idx) = get_ts();
        }


	

}