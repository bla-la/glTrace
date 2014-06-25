#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexImage1D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexImage1D_Idx))


GLAPI void  APIENTRY glCompressedTexImage1D(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTexImage1D_Idx))
	{
            GL_ENTRY_PTR(glCompressedTexImage1D_Idx) = dlsym(RTLD_NEXT,"glCompressedTexImage1D");
            if(!GL_ENTRY_PTR(glCompressedTexImage1D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTexImage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexImage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexImage1D_wrp(target,level,internalformat,width,border,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexImage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexImage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexImage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexImage1D_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexImage1D_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTexImage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexImage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexImage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexImage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexImage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexImage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexImage1D_Idx) = get_ts();
        }


	

}