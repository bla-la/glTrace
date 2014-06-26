#include <glTraceCommon.h>
#include <generated.h>

#define glTextureBufferEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glTextureBufferEXT_Idx))


GLAPI void  APIENTRY glTextureBufferEXT(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureBufferEXT_wrp(texture,target,internalformat,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureBufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureBufferEXT_Idx) = get_ts();
        }


	

}