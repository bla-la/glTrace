#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureLevelParameterivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetTextureLevelParameterivEXT_Idx))


GLAPI void  APIENTRY glGetTextureLevelParameterivEXT(GLuint texture,GLenum target,GLint level,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureLevelParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureLevelParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureLevelParameterivEXT");
            if(!GL_ENTRY_PTR(glGetTextureLevelParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureLevelParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureLevelParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureLevelParameterivEXT_wrp(texture,target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureLevelParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureLevelParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureLevelParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureLevelParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureLevelParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureLevelParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureLevelParameterivEXT_Idx) = get_ts();
        }


	

}