#include <glTraceCommon.h>
#include <generated.h>

#define glTextureParameterivEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glTextureParameterivEXT_Idx))


GLAPI void  APIENTRY glTextureParameterivEXT(GLuint texture,GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureParameterivEXT_wrp(texture,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureParameterivEXT_Idx) = get_ts();
        }


	

}