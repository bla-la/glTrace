#include <glTraceCommon.h>
#include <generated.h>

#define glTextureStorageSparseAMD_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glTextureStorageSparseAMD_Idx))


GLAPI void  APIENTRY glTextureStorageSparseAMD(GLuint texture,GLenum target,GLenum internalFormat,GLsizei width,GLsizei height,GLsizei depth,GLsizei layers,GLbitfield flags)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureStorageSparseAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureStorageSparseAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureStorageSparseAMD_wrp(texture,target,internalFormat,width,height,depth,layers,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureStorageSparseAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureStorageSparseAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureStorageSparseAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureStorageSparseAMD_Idx),
				 GL_ENTRY_LAST_TS(glTextureStorageSparseAMD_Idx));


        if(last_diff > 1000000000){
            printf("glTextureStorageSparseAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureStorageSparseAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorageSparseAMD_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorageSparseAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureStorageSparseAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureStorageSparseAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureStorageSparseAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureStorageSparseAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureStorageSparseAMD_Idx) = get_ts();
        }


	

}