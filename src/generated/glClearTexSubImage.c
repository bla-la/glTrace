#include <glTraceCommon.h>
#include <generated.h>

#define glClearTexSubImage_wrp						\
    ((void  (*)(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearTexSubImage_Idx))


GLAPI void  APIENTRY glClearTexSubImage(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearTexSubImage_Idx))
	{
            GL_ENTRY_PTR(glClearTexSubImage_Idx) = dlsym(RTLD_NEXT,"glClearTexSubImage");
            if(!GL_ENTRY_PTR(glClearTexSubImage_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearTexSubImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearTexSubImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearTexSubImage_wrp(texture,level,xoffset,yoffset,zoffset,width,height,depth,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearTexSubImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearTexSubImage_Idx) ++;

        GL_ENTRY_LAST_TS(glClearTexSubImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearTexSubImage_Idx),
				 GL_ENTRY_LAST_TS(glClearTexSubImage_Idx));
        if(last_diff > 1000000000){
            printf("glClearTexSubImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearTexSubImage_Idx),
	             GL_ENTRY_CALL_TIME(glClearTexSubImage_Idx),
	             GL_ENTRY_CALL_TIME(glClearTexSubImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearTexSubImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearTexSubImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearTexSubImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearTexSubImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearTexSubImage_Idx) = get_ts();
        }


	

}