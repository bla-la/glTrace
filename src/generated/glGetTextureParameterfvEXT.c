#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureParameterfvEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetTextureParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetTextureParameterfvEXT(GLuint texture,GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTextureParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTextureParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetTextureParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetTextureParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTextureParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTextureParameterfvEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTextureParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureParameterfvEXT_Idx) = get_ts();
        }


	

}