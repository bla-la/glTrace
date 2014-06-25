#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedMultiTexSubImage3DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedMultiTexSubImage3DEXT_Idx))


GLAPI void  APIENTRY glCompressedMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedMultiTexSubImage3DEXT_Idx))
	{
            GL_ENTRY_PTR(glCompressedMultiTexSubImage3DEXT_Idx) = dlsym(RTLD_NEXT,"glCompressedMultiTexSubImage3DEXT");
            if(!GL_ENTRY_PTR(glCompressedMultiTexSubImage3DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedMultiTexSubImage3DEXT_wrp(texunit,target,level,xoffset,yoffset,zoffset,width,height,depth,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage3DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedMultiTexSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage3DEXT_Idx) = get_ts();
        }


	

}