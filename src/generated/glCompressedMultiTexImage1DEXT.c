#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedMultiTexImage1DEXT_wrp						\
    ((void  (*)(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *bits                                        \
    ))GL_ENTRY_PTR(glCompressedMultiTexImage1DEXT_Idx))


GLAPI void  APIENTRY glCompressedMultiTexImage1DEXT(GLenum texunit,GLenum target,GLint level,GLenum internalformat,GLsizei width,GLint border,GLsizei imageSize,const void *bits)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedMultiTexImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedMultiTexImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedMultiTexImage1DEXT_wrp(texunit,target,level,internalformat,width,border,imageSize,bits);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedMultiTexImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedMultiTexImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedMultiTexImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedMultiTexImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCompressedMultiTexImage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedMultiTexImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedMultiTexImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedMultiTexImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedMultiTexImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedMultiTexImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedMultiTexImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedMultiTexImage1DEXT_Idx) = get_ts();
        }


	

}