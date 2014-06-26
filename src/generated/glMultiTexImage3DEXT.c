#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexImage3DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glMultiTexImage3DEXT_Idx))


GLAPI void  APIENTRY glMultiTexImage3DEXT(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLsizei height,GLsizei depth,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexImage3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexImage3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexImage3DEXT_wrp(texunit,target,level,internalformat,width,height,depth,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexImage3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexImage3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexImage3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexImage3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexImage3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexImage3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexImage3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexImage3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexImage3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexImage3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexImage3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexImage3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexImage3DEXT_Idx) = get_ts();
        }


	

}