#include <glTraceCommon.h>
#include <generated.h>

#define glGetnUniformivEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei bufSize,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetnUniformivEXT_Idx))


GLAPI void  APIENTRY glGetnUniformivEXT(GLuint program,GLint location,GLsizei bufSize,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnUniformivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnUniformivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnUniformivEXT_wrp(program,location,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnUniformivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnUniformivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnUniformivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnUniformivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetnUniformivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetnUniformivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnUniformivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnUniformivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnUniformivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnUniformivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnUniformivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnUniformivEXT_Idx) = get_ts();
        }


	

}