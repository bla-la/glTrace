#include <glTraceCommon.h>
#include <generated.h>

#define glCopyMultiTexSubImage2DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyMultiTexSubImage2DEXT_Idx))


GLAPI void  APIENTRY glCopyMultiTexSubImage2DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyMultiTexSubImage2DEXT_Idx))
	{
            GL_ENTRY_PTR(glCopyMultiTexSubImage2DEXT_Idx) = dlsym(RTLD_NEXT,"glCopyMultiTexSubImage2DEXT");
            if(!GL_ENTRY_PTR(glCopyMultiTexSubImage2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyMultiTexSubImage2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyMultiTexSubImage2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyMultiTexSubImage2DEXT_wrp(texunit,target,level,xoffset,yoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyMultiTexSubImage2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyMultiTexSubImage2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyMultiTexSubImage2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCopyMultiTexSubImage2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyMultiTexSubImage2DEXT_Idx) = get_ts();
        }


	

}