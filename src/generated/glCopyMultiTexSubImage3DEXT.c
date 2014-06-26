#include <glTraceCommon.h>
#include <generated.h>

#define glCopyMultiTexSubImage3DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyMultiTexSubImage3DEXT_Idx))


GLAPI void  APIENTRY glCopyMultiTexSubImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyMultiTexSubImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyMultiTexSubImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyMultiTexSubImage3DEXT_wrp(texunit,target,level,xoffset,yoffset,zoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyMultiTexSubImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyMultiTexSubImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyMultiTexSubImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyMultiTexSubImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyMultiTexSubImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyMultiTexSubImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyMultiTexSubImage3DEXT_Idx) = get_ts();
        }


	

}