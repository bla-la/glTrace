#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetTexSubImageQCOM_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,void *texels                                        \
    ))GL_ENTRY_PTR(glExtGetTexSubImageQCOM_Idx))


GLAPI void  APIENTRY glExtGetTexSubImageQCOM(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,void *texels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtGetTexSubImageQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtGetTexSubImageQCOM_Idx) = dlsym(RTLD_NEXT,"glExtGetTexSubImageQCOM");
            if(!GL_ENTRY_PTR(glExtGetTexSubImageQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtGetTexSubImageQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetTexSubImageQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetTexSubImageQCOM_wrp(target,level,xoffset,yoffset,zoffset,width,height,depth,format,type,texels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetTexSubImageQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetTexSubImageQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetTexSubImageQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetTexSubImageQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetTexSubImageQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtGetTexSubImageQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetTexSubImageQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexSubImageQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexSubImageQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetTexSubImageQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetTexSubImageQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetTexSubImageQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetTexSubImageQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetTexSubImageQCOM_Idx) = get_ts();
        }


	

}