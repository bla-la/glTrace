#include <glTraceCommon.h>
#include <generated.h>

#define glInvalidateTexSubImage_wrp						\
    ((void  (*)(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth                                        \
    ))GL_ENTRY_PTR(glInvalidateTexSubImage_Idx))


GLAPI void  APIENTRY glInvalidateTexSubImage(GLuint texture,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLsizei width,GLsizei height,GLsizei depth)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glInvalidateTexSubImage_Idx))
	{
            GL_ENTRY_PTR(glInvalidateTexSubImage_Idx) = dlsym(RTLD_NEXT,"glInvalidateTexSubImage");
            if(!GL_ENTRY_PTR(glInvalidateTexSubImage_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glInvalidateTexSubImage_Idx))
    	{
            GL_ENTRY_PREV_TS(glInvalidateTexSubImage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInvalidateTexSubImage_wrp(texture,level,xoffset,yoffset,zoffset,width,height,depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInvalidateTexSubImage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInvalidateTexSubImage_Idx) ++;

        GL_ENTRY_LAST_TS(glInvalidateTexSubImage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInvalidateTexSubImage_Idx),
				 GL_ENTRY_LAST_TS(glInvalidateTexSubImage_Idx));
        if(last_diff > 1000000000){
            printf("glInvalidateTexSubImage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInvalidateTexSubImage_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateTexSubImage_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateTexSubImage_Idx) /
	             GL_ENTRY_CALL_COUNT(glInvalidateTexSubImage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInvalidateTexSubImage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInvalidateTexSubImage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInvalidateTexSubImage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInvalidateTexSubImage_Idx) = get_ts();
        }


	

}