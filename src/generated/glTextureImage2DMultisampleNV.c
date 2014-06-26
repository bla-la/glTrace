#include <glTraceCommon.h>
#include <generated.h>

#define glTextureImage2DMultisampleNV_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei samples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations                                        \
    ))GL_ENTRY_PTR(glTextureImage2DMultisampleNV_Idx))


GLAPI void  APIENTRY glTextureImage2DMultisampleNV(GLuint texture,GLenum target,GLsizei samples,GLint internalFormat,GLsizei width,GLsizei height,GLboolean fixedSampleLocations)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureImage2DMultisampleNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureImage2DMultisampleNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureImage2DMultisampleNV_wrp(texture,target,samples,internalFormat,width,height,fixedSampleLocations);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureImage2DMultisampleNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureImage2DMultisampleNV_Idx),
				 GL_ENTRY_LAST_TS(glTextureImage2DMultisampleNV_Idx));


        if(last_diff > 1000000000){
            printf("glTextureImage2DMultisampleNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleNV_Idx),
	             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureImage2DMultisampleNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureImage2DMultisampleNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureImage2DMultisampleNV_Idx) = get_ts();
        }


	

}