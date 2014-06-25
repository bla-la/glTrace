#include <glTraceCommon.h>
#include <generated.h>

#define glTexSubImage2DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexSubImage2DEXT_Idx))


GLAPI void  APIENTRY glTexSubImage2DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexSubImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glTexSubImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glTexSubImage2DEXT");
            if(!GL_ENTRY_PTR(glTexSubImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexSubImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexSubImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexSubImage2DEXT_wrp(target,level,xoffset,yoffset,width,height,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexSubImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexSubImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexSubImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexSubImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexSubImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glTexSubImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexSubImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexSubImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexSubImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexSubImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexSubImage2DEXT_Idx) = get_ts();
        }


	

}