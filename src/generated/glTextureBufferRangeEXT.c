#include <glTraceCommon.h>
#include <generated.h>

#define glTextureBufferRangeEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glTextureBufferRangeEXT_Idx))


GLAPI void  APIENTRY glTextureBufferRangeEXT(GLuint texture,GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureBufferRangeEXT_wrp(texture,target,internalformat,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureBufferRangeEXT_Idx) = get_ts();
        }


	

}