#include <glTraceCommon.h>
#include <generated.h>

#define glGetCompressedTextureImageEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint lod,void *img                                        \
    ))GL_ENTRY_PTR(glGetCompressedTextureImageEXT_Idx))


GLAPI void  APIENTRY glGetCompressedTextureImageEXT(GLuint texture,GLenum target,GLint lod,void *img)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetCompressedTextureImageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCompressedTextureImageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCompressedTextureImageEXT_wrp(texture,target,lod,img);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCompressedTextureImageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCompressedTextureImageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCompressedTextureImageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCompressedTextureImageEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetCompressedTextureImageEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetCompressedTextureImageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCompressedTextureImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTextureImageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetCompressedTextureImageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCompressedTextureImageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCompressedTextureImageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCompressedTextureImageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCompressedTextureImageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCompressedTextureImageEXT_Idx) = get_ts();
        }


	

}