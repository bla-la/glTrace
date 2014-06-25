#include <glTraceCommon.h>
#include <generated.h>

#define glCopyMultiTexSubImage1DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyMultiTexSubImage1DEXT_Idx))


GLAPI void  APIENTRY glCopyMultiTexSubImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyMultiTexSubImage1DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyMultiTexSubImage1DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyMultiTexSubImage1DEXT");
            if(!GL_ENTRY_PTR(glCopyMultiTexSubImage1DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyMultiTexSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyMultiTexSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyMultiTexSubImage1DEXT_wrp(texunit,target,level,xoffset,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyMultiTexSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyMultiTexSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyMultiTexSubImage1DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyMultiTexSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyMultiTexSubImage1DEXT_Idx) = get_ts();
        }


	

}