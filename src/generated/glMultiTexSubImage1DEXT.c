#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexSubImage1DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glMultiTexSubImage1DEXT_Idx))


GLAPI void  APIENTRY glMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMultiTexSubImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glMultiTexSubImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glMultiTexSubImage1DEXT");
            if(!GL_ENTRY_PTR(glMultiTexSubImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMultiTexSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexSubImage1DEXT_wrp(texunit,target,level,xoffset,width,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexSubImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glMultiTexSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexSubImage1DEXT_Idx) = get_ts();
        }


	

}