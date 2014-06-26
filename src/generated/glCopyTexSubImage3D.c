#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTexSubImage3D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyTexSubImage3D_Idx))


GLAPI void  APIENTRY glCopyTexSubImage3D(GLenum target,GLint level,GLint xoffset,GLint yoffset,GLint zoffset,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTexSubImage3D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTexSubImage3D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTexSubImage3D_wrp(target,level,xoffset,yoffset,zoffset,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTexSubImage3D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTexSubImage3D_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTexSubImage3D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTexSubImage3D_Idx),
				 GL_ENTRY_LAST_TS(glCopyTexSubImage3D_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTexSubImage3D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage3D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTexSubImage3D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTexSubImage3D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTexSubImage3D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTexSubImage3D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTexSubImage3D_Idx) = get_ts();
        }


	

}