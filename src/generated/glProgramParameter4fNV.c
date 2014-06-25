#include <glTraceCommon.h>
#include <generated.h>

#define glProgramParameter4fNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glProgramParameter4fNV_Idx))


GLAPI void  APIENTRY glProgramParameter4fNV(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramParameter4fNV_Idx))
	{
            GL_ENTRY_PTR(glProgramParameter4fNV_Idx) = dlsym(RTLD_NEXT,"glProgramParameter4fNV");
            if(!GL_ENTRY_PTR(glProgramParameter4fNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramParameter4fNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramParameter4fNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramParameter4fNV_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramParameter4fNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramParameter4fNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramParameter4fNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramParameter4fNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramParameter4fNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramParameter4fNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramParameter4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4fNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramParameter4fNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramParameter4fNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramParameter4fNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramParameter4fNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramParameter4fNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramParameter4fNV_Idx) = get_ts();
        }


	

}