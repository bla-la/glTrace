#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniformsiv_wrp						\
    ((void  (*)(GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetActiveUniformsiv_Idx))


GLAPI void  APIENTRY glGetActiveUniformsiv(GLuint program,GLsizei uniformCount,const GLuint *uniformIndices,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveUniformsiv_Idx))
	{
            GL_ENTRY_PTR(glGetActiveUniformsiv_Idx) = dlsym(RTLD_NEXT,"glGetActiveUniformsiv");
            if(!GL_ENTRY_PTR(glGetActiveUniformsiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveUniformsiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniformsiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniformsiv_wrp(program,uniformCount,uniformIndices,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniformsiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniformsiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniformsiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniformsiv_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniformsiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveUniformsiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformsiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformsiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformsiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformsiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniformsiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniformsiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniformsiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniformsiv_Idx) = get_ts();
        }


	

}