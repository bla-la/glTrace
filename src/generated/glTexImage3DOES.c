#include <glTraceCommon.h>
#include <generated.h>

#define glTexImage3DOES_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glTexImage3DOES_Idx))


GLAPI void  APIENTRY glTexImage3DOES(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTexImage3DOES_Idx))
	{
            GL_ENTRY_PTR(glTexImage3DOES_Idx) = dlsym(RTLD_NEXT,"glTexImage3DOES");
            if(!GL_ENTRY_PTR(glTexImage3DOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTexImage3DOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexImage3DOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexImage3DOES_wrp(target,level,internalformat,width,height,depth,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexImage3DOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexImage3DOES_Idx) ++;

        GL_ENTRY_LAST_TS(glTexImage3DOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexImage3DOES_Idx),
				 GL_ENTRY_LAST_TS(glTexImage3DOES_Idx));
        if(last_diff > 1000000000){
            printf("glTexImage3DOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glTexImage3DOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexImage3DOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexImage3DOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexImage3DOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexImage3DOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexImage3DOES_Idx) = get_ts();
        }


	

}