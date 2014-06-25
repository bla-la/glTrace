#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureLevelParameterfvEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTextureLevelParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetTextureLevelParameterfvEXT(GLuint texture,GLenum target,GLint level,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureLevelParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureLevelParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureLevelParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetTextureLevelParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureLevelParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureLevelParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureLevelParameterfvEXT_wrp(texture,target,level,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureLevelParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureLevelParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureLevelParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureLevelParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureLevelParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureLevelParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureLevelParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureLevelParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureLevelParameterfvEXT_Idx) = get_ts();
        }


	

}