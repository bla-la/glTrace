#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexSubImage3DOES_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyTexSubImage3DOES_Idx))


GLAPI void  APIENTRY glCopyTexSubImage3DOES(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyTexSubImage3DOES_Idx))
	{
            GL_ENTRY_PTR(glCopyTexSubImage3DOES_Idx) = dlsym(RTLD_NEXT,"glCopyTexSubImage3DOES");
            if(!GL_ENTRY_PTR(glCopyTexSubImage3DOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyTexSubImage3DOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexSubImage3DOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexSubImage3DOES_wrp(target,level,xoffset,yoffset,zoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexSubImage3DOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexSubImage3DOES_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexSubImage3DOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexSubImage3DOES_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexSubImage3DOES_Idx));
        if(last_diff > 1000000000){
            printf("glCopyTexSubImage3DOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage3DOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3DOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexSubImage3DOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3DOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexSubImage3DOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexSubImage3DOES_Idx) = get_ts();
        }


	

}