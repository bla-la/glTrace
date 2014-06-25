#include <glTraceCommon.h>
#include <generated.h>

#define glTexSubImage2D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexSubImage2D_Idx))


GLAPI void  APIENTRY glTexSubImage2D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexSubImage2D_Idx))
	{
            GL_ENTRY_PTR(glTexSubImage2D_Idx) = dlsym(RTLD_NEXT,"glTexSubImage2D");
            if(!GL_ENTRY_PTR(glTexSubImage2D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexSubImage2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexSubImage2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexSubImage2D_wrp(target,level,xoffset,yoffset,width,height,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexSubImage2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexSubImage2D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexSubImage2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexSubImage2D_Idx),
				 GL_ENTRY_LAST_TS(glTexSubImage2D_Idx));
        if(last_diff > 1000000000){
            printf("glTexSubImage2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexSubImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexSubImage2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexSubImage2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexSubImage2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexSubImage2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexSubImage2D_Idx) = get_ts();
        }


	

}