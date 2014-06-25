#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameterIivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTextureParameterIivEXT_Idx))


GLAPI void  APIENTRY glTextureParameterIivEXT(GLuint texture,GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTextureParameterIivEXT_Idx))
	{
            GL_ENTRY_PTR(glTextureParameterIivEXT_Idx) = dlsym(RTLD_NEXT,"glTextureParameterIivEXT");
            if(!GL_ENTRY_PTR(glTextureParameterIivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTextureParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameterIivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameterIivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTextureParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameterIivEXT_Idx) = get_ts();
        }


	

}