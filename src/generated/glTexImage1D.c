#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage1D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexImage1D_Idx))


GLAPI void  APIENTRY glTexImage1D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexImage1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage1D_wrp(target,level,internalformat,width,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage1D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage1D_Idx),
				 GL_ENTRY_LAST_TS(glTexImage1D_Idx));


        if(last_diff > 1000000000){
            printf("glTexImage1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage1D_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage1D_Idx) = get_ts();
        }


	

}