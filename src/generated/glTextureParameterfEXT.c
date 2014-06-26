#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameterfEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glTextureParameterfEXT_Idx))


GLAPI void  APIENTRY glTextureParameterfEXT(GLuint texture,GLenum target,GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureParameterfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameterfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameterfEXT_wrp(texture,target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameterfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameterfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameterfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameterfEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameterfEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureParameterfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameterfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameterfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameterfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameterfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameterfEXT_Idx) = get_ts();
        }


	

}