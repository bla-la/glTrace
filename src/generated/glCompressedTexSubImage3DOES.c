#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexSubImage3DOES_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexSubImage3DOES_Idx))


GLAPI void  APIENTRY glCompressedTexSubImage3DOES(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTexSubImage3DOES_Idx))
	{
            GL_ENTRY_PTR(glCompressedTexSubImage3DOES_Idx) = dlsym(RTLD_NEXT,"glCompressedTexSubImage3DOES");
            if(!GL_ENTRY_PTR(glCompressedTexSubImage3DOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTexSubImage3DOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexSubImage3DOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexSubImage3DOES_wrp(target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexSubImage3DOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3DOES_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexSubImage3DOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexSubImage3DOES_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexSubImage3DOES_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTexSubImage3DOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3DOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3DOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexSubImage3DOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage3DOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexSubImage3DOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexSubImage3DOES_Idx) = get_ts();
        }


	

}