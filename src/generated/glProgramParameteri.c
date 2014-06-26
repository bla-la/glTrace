#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameteri_wrp						\
    ((void  (*)(GLuint program,GLenum pname,GLint value                                        \
    ))GL_ENTRY_PTR(glProgramParameteri_Idx))


GLAPI void  APIENTRY glProgramParameteri(GLuint program,GLenum pname,GLint value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameteri_wrp(program,pname,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameteri_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameteri_Idx));


        if(last_diff > 1000000000){
            printf("glProgramParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameteri_Idx) = get_ts();
        }


	

}