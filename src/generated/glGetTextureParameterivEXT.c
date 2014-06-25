#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureParameterivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTextureParameterivEXT_Idx))


GLAPI void  APIENTRY glGetTextureParameterivEXT(GLuint texture,GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureParameterivEXT");
            if(!GL_ENTRY_PTR(glGetTextureParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureParameterivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureParameterivEXT_Idx) = get_ts();
        }


	

}