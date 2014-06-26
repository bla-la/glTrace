#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameteriEXT_wrp						\
    ((void  (*)(GLuint program,GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glProgramParameteriEXT_Idx))


GLAPI void  APIENTRY glProgramParameteriEXT(GLuint program,GLenum pname,GLint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameteriEXT_wrp(program,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameteriEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameteriEXT_Idx) = get_ts();
        }


	

}