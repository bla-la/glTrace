#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexSubImage2DARB_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexSubImage2DARB_Idx))


GLAPI void  APIENTRY glCompressedTexSubImage2DARB(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedTexSubImage2DARB_Idx))
	{
            GL_ENTRY_PTR(glCompressedTexSubImage2DARB_Idx) = dlsym(RTLD_NEXT,"glCompressedTexSubImage2DARB");
            if(!GL_ENTRY_PTR(glCompressedTexSubImage2DARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedTexSubImage2DARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexSubImage2DARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexSubImage2DARB_wrp(target,level,xoffset,yoffset,width,height,format,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexSubImage2DARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexSubImage2DARB_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexSubImage2DARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexSubImage2DARB_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexSubImage2DARB_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedTexSubImage2DARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage2DARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage2DARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage2DARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage2DARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexSubImage2DARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage2DARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexSubImage2DARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexSubImage2DARB_Idx) = get_ts();
        }


	

}