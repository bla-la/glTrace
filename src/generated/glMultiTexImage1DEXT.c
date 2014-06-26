#include <glTraceCommon.h>
#include <generated.h>

#define glMultiTexImage1DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels                                        \
    ))GL_ENTRY_PTR(glMultiTexImage1DEXT_Idx))


GLAPI void  APIENTRY glMultiTexImage1DEXT(GLenum texunit,GLenum target,GLint level,GLint internalformat,GLsizei width,GLint border,GLenum format,GLenum type,const void *pixels)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiTexImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiTexImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiTexImage1DEXT_wrp(texunit,target,level,internalformat,width,border,format,type,pixels);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiTexImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiTexImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiTexImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiTexImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glMultiTexImage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMultiTexImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMultiTexImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiTexImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiTexImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiTexImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiTexImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiTexImage1DEXT_Idx) = get_ts();
        }


	

}