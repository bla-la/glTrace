#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveVaryingNV_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetActiveVaryingNV_Idx))


GLAPI void  APIENTRY glGetActiveVaryingNV(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveVaryingNV_Idx))
	{
            GL_ENTRY_PTR(glGetActiveVaryingNV_Idx) = dlsym(RTLD_NEXT,"glGetActiveVaryingNV");
            if(!GL_ENTRY_PTR(glGetActiveVaryingNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveVaryingNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveVaryingNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveVaryingNV_wrp(program,index,bufSize,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveVaryingNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveVaryingNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveVaryingNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveVaryingNV_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveVaryingNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveVaryingNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveVaryingNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveVaryingNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveVaryingNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveVaryingNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveVaryingNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveVaryingNV_Idx) = get_ts();
        }


	

}