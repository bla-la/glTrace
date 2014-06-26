#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramStringEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLenum format,GLsizei len,const void *string                                        \
    ))GL_ENTRY_PTR(glNamedProgramStringEXT_Idx))


GLAPI void  APIENTRY glNamedProgramStringEXT(GLuint program,GLenum target,GLenum format,GLsizei len,const void *string)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedProgramStringEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramStringEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramStringEXT_wrp(program,target,format,len,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramStringEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramStringEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramStringEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramStringEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramStringEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedProgramStringEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramStringEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramStringEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramStringEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramStringEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramStringEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramStringEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramStringEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramStringEXT_Idx) = get_ts();
        }


	

}