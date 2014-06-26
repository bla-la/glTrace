#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedMultiTexSubImage2DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedMultiTexSubImage2DEXT_Idx))


GLAPI void  APIENTRY glCompressedMultiTexSubImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedMultiTexSubImage2DEXT_wrp(texunit,target,level,xoffset,yoffset,width,height,format,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedMultiTexSubImage2DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedMultiTexSubImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedMultiTexSubImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedMultiTexSubImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedMultiTexSubImage2DEXT_Idx) = get_ts();
        }


	

}