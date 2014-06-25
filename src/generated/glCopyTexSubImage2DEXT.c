#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexSubImage2DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyTexSubImage2DEXT_Idx))


GLAPI void  APIENTRY glCopyTexSubImage2DEXT(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyTexSubImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyTexSubImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyTexSubImage2DEXT");
            if(!GL_ENTRY_PTR(glCopyTexSubImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyTexSubImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexSubImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexSubImage2DEXT_wrp(target,level,xoffset,yoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexSubImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexSubImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexSubImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexSubImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexSubImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyTexSubImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexSubImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexSubImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexSubImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexSubImage2DEXT_Idx) = get_ts();
        }


	

}