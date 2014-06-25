#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedMultiTexSubImage1DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedMultiTexSubImage1DEXT_Idx))


GLAPI void  APIENTRY glCompressedMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompressedMultiTexSubImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glCompressedMultiTexSubImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glCompressedMultiTexSubImage1DEXT");
            if(!GL_ENTRY_PTR(glCompressedMultiTexSubImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedMultiTexSubImage1DEXT_wrp(texunit,target,level,xoffset,width,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCompressedMultiTexSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage1DEXT_Idx) = get_ts();
        }


	

}