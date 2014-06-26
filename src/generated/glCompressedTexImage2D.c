#include <glTraceCommon.h>
#include <generated.h>

#define glCompressedTexImage2D_wrp						\
    ((void  (*)(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data                                        \
    ))GL_ENTRY_PTR(glCompressedTexImage2D_Idx))


GLAPI void  APIENTRY glCompressedTexImage2D(GLenum target,GLint level,GLenum internalformat,GLsizei width,GLsizei height,GLint border,GLsizei imageSize,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCompressedTexImage2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompressedTexImage2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompressedTexImage2D_wrp(target,level,internalformat,width,height,border,imageSize,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompressedTexImage2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompressedTexImage2D_Idx) ++;

        GL_ENTRY_LAST_TS(glCompressedTexImage2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompressedTexImage2D_Idx),
				 GL_ENTRY_LAST_TS(glCompressedTexImage2D_Idx));


        if(last_diff > 1000000000){
            printf("glCompressedTexImage2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompressedTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexImage2D_Idx),
	             GL_ENTRY_CALL_TIME(glCompressedTexImage2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompressedTexImage2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompressedTexImage2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompressedTexImage2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompressedTexImage2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompressedTexImage2D_Idx) = get_ts();
        }


	

}