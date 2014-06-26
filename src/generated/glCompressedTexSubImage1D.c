#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexSubImage1D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexSubImage1D_Idx))


GLAPI void  APIENTRY glCompressedTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedTexSubImage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexSubImage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexSubImage1D_wrp(target,level,xoffset,width,format,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexSubImage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexSubImage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexSubImage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexSubImage1D_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexSubImage1D_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedTexSubImage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexSubImage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexSubImage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexSubImage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexSubImage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexSubImage1D_Idx) = get_ts();
        }


	

}