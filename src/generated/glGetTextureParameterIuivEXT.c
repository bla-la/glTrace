#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureParameterIuivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetTextureParameterIuivEXT_Idx))


GLAPI void  APIENTRY glGetTextureParameterIuivEXT(GLuint texture,GLenum target,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureParameterIuivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureParameterIuivEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureParameterIuivEXT");
            if(!GL_ENTRY_PTR(glGetTextureParameterIuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureParameterIuivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureParameterIuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureParameterIuivEXT_Idx) = get_ts();
        }


	

}