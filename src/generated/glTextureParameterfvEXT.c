#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameterfvEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glTextureParameterfvEXT_Idx))


GLAPI void  APIENTRY glTextureParameterfvEXT(GLuint texture,GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameterfvEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameterfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameterfvEXT_Idx) = get_ts();
        }


	

}