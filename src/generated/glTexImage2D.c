#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage2D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexImage2D_Idx))


GLAPI void  APIENTRY glTexImage2D(GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexImage2D_Idx))
	{
            GL_ENTRY_PTR(glTexImage2D_Idx) = dlsym(RTLD_NEXT,"glTexImage2D");
            if(!GL_ENTRY_PTR(glTexImage2D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexImage2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage2D_wrp(target,level,internalformat,width,height,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage2D_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage2D_Idx),
				 GL_ENTRY_LAST_TS(glTexImage2D_Idx));
        if(last_diff > 1000000000){
            printf("glTexImage2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage2D_Idx) = get_ts();
        }


	

}