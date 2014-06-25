#include <glTraceCommon.h>
#include <generated.h>

#define glProgramNamedParameter4fvNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,const GLfloat *v                                        \
    ))GL_ENTRY_PTR(glProgramNamedParameter4fvNV_Idx))


GLAPI void  APIENTRY glProgramNamedParameter4fvNV(GLuint id,GLsizei len,const GLubyte *name,const GLfloat *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramNamedParameter4fvNV_Idx))
	{
            GL_ENTRY_PTR(glProgramNamedParameter4fvNV_Idx) = dlsym(RTLD_NEXT,"glProgramNamedParameter4fvNV");
            if(!GL_ENTRY_PTR(glProgramNamedParameter4fvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramNamedParameter4fvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramNamedParameter4fvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramNamedParameter4fvNV_wrp(id,len,name,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramNamedParameter4fvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramNamedParameter4fvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramNamedParameter4fvNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramNamedParameter4fvNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramNamedParameter4fvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fvNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramNamedParameter4fvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramNamedParameter4fvNV_Idx) = get_ts();
        }


	

}