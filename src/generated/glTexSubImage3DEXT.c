#include <glTraceCommon.h>
#include <generated.h>

#define glTexSubImage3DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexSubImage3DEXT_Idx))


GLAPI void  APIENTRY glTexSubImage3DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexSubImage3DEXT_wrp(target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexSubImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTexSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexSubImage3DEXT_Idx) = get_ts();
        }


	

}