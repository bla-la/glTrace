#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexSubImage1DEXT_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyTexSubImage1DEXT_Idx))


GLAPI void  APIENTRY glCopyTexSubImage1DEXT(GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyTexSubImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyTexSubImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyTexSubImage1DEXT");
            if(!GL_ENTRY_PTR(glCopyTexSubImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyTexSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexSubImage1DEXT_wrp(target,level,xoffset,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexSubImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyTexSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexSubImage1DEXT_Idx) = get_ts();
        }


	

}