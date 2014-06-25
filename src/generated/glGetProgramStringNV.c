#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramStringNV_wrp						\
    ((void  (*)(GLuint id,GLenum pname,GLubyte *program                                        \
    ))GL_ENTRY_PTR(glGetProgramStringNV_Idx))


GLAPI void  APIENTRY glGetProgramStringNV(GLuint id,GLenum pname,GLubyte *program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramStringNV_Idx))
	{
            GL_ENTRY_PTR(glGetProgramStringNV_Idx) = dlsym(RTLD_NEXT,"glGetProgramStringNV");
            if(!GL_ENTRY_PTR(glGetProgramStringNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramStringNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramStringNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramStringNV_wrp(id,pname,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramStringNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramStringNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramStringNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramStringNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramStringNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramStringNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramStringNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStringNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStringNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramStringNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramStringNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramStringNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramStringNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramStringNV_Idx) = get_ts();
        }


	

}