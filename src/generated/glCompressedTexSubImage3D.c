#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexSubImage3D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexSubImage3D_Idx))


GLAPI void  APIENTRY glCompressedTexSubImage3D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTexSubImage3D_Idx))
	{
            GL_ENTRY_PTR(glCompressedTexSubImage3D_Idx) = dlsym(RTLD_NEXT,"glCompressedTexSubImage3D");
            if(!GL_ENTRY_PTR(glCompressedTexSubImage3D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTexSubImage3D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexSubImage3D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexSubImage3D_wrp(target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexSubImage3D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3D_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexSubImage3D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexSubImage3D_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexSubImage3D_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTexSubImage3D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexSubImage3D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexSubImage3D_Idx) = get_ts();
        }


	

}