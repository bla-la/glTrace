#include <glTraceCommon.h>
#include <generated.h>

#define glProgramSubroutineParametersuivNV_wrp						\
    ((void  (*)(GLenum target,GLsizei count,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glProgramSubroutineParametersuivNV_Idx))


GLAPI void  APIENTRY glProgramSubroutineParametersuivNV(GLenum target,GLsizei count,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramSubroutineParametersuivNV_Idx))
	{
            GL_ENTRY_PTR(glProgramSubroutineParametersuivNV_Idx) = dlsym(RTLD_NEXT,"glProgramSubroutineParametersuivNV");
            if(!GL_ENTRY_PTR(glProgramSubroutineParametersuivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramSubroutineParametersuivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramSubroutineParametersuivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramSubroutineParametersuivNV_wrp(target,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramSubroutineParametersuivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramSubroutineParametersuivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramSubroutineParametersuivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramSubroutineParametersuivNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramSubroutineParametersuivNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramSubroutineParametersuivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramSubroutineParametersuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramSubroutineParametersuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramSubroutineParametersuivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramSubroutineParametersuivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramSubroutineParametersuivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramSubroutineParametersuivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramSubroutineParametersuivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramSubroutineParametersuivNV_Idx) = get_ts();
        }


	

}