#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureParameterIivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTextureParameterIivEXT_Idx))


GLAPI void  APIENTRY glGetTextureParameterIivEXT(GLuint texture,GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureParameterIivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureParameterIivEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureParameterIivEXT");
            if(!GL_ENTRY_PTR(glGetTextureParameterIivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureParameterIivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureParameterIivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureParameterIivEXT_Idx) = get_ts();
        }


	

}