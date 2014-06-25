#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexSubImage3DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glMultiTexSubImage3DEXT_Idx))


GLAPI void  APIENTRY glMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexSubImage3DEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexSubImage3DEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexSubImage3DEXT");
            if(!GL_ENTRY_PTR(glMultiTexSubImage3DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexSubImage3DEXT_wrp(texunit,target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexSubImage3DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexSubImage3DEXT_Idx) = get_ts();
        }


	

}