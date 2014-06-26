#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameterIuivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glTextureParameterIuivEXT_Idx))


GLAPI void  APIENTRY glTextureParameterIuivEXT(GLuint texture,GLenum target,GLenum pname,const GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameterIuivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameterIuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameterIuivEXT_Idx) = get_ts();
        }


	

}