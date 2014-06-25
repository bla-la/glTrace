#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveAttrib_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetActiveAttrib_Idx))


GLAPI void  APIENTRY glGetActiveAttrib(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLint *size,GLenum *type,GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveAttrib_Idx))
	{
            GL_ENTRY_PTR(glGetActiveAttrib_Idx) = dlsym(RTLD_NEXT,"glGetActiveAttrib");
            if(!GL_ENTRY_PTR(glGetActiveAttrib_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveAttrib_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveAttrib_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveAttrib_wrp(program,index,bufSize,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveAttrib_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveAttrib_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveAttrib_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveAttrib_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveAttrib_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveAttrib %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAttrib_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveAttrib_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveAttrib_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveAttrib_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveAttrib_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveAttrib_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveAttrib_Idx) = get_ts();
        }


	

}