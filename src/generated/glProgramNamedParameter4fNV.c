#include <glTraceCommon.h>
#include <generated.h>

#define glProgramNamedParameter4fNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glProgramNamedParameter4fNV_Idx))


GLAPI void  APIENTRY glProgramNamedParameter4fNV(GLuint id,GLsizei len,const GLubyte *name,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramNamedParameter4fNV_Idx))
	{
            GL_ENTRY_PTR(glProgramNamedParameter4fNV_Idx) = dlsym(RTLD_NEXT,"glProgramNamedParameter4fNV");
            if(!GL_ENTRY_PTR(glProgramNamedParameter4fNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramNamedParameter4fNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramNamedParameter4fNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramNamedParameter4fNV_wrp(id,len,name,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramNamedParameter4fNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramNamedParameter4fNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramNamedParameter4fNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramNamedParameter4fNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramNamedParameter4fNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramNamedParameter4fNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramNamedParameter4fNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramNamedParameter4fNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramNamedParameter4fNV_Idx) = get_ts();
        }


	

}