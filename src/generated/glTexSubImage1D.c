#include <glTraceCommon.h>
#include <generated.h>

#define glTexSubImage1D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexSubImage1D_Idx))


GLAPI void  APIENTRY glTexSubImage1D(GLenum target,GLint level,GLint xoffset,GLsizei width,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexSubImage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexSubImage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexSubImage1D_wrp(target,level,xoffset,width,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexSubImage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexSubImage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexSubImage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexSubImage1D_Idx),
				 GL_ENTRY_LAST_TS(glTexSubImage1D_Idx));


        if(last_diff > 1000000000){
            printf("glTexSubImage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexSubImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexSubImage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexSubImage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexSubImage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexSubImage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexSubImage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexSubImage1D_Idx) = get_ts();
        }


	

}