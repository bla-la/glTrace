#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTextureSubImage1DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyTextureSubImage1DEXT_Idx))


GLAPI void  APIENTRY glCopyTextureSubImage1DEXT(GLuint texture,GLenum target,GLint level,GLint xoffset,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTextureSubImage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTextureSubImage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTextureSubImage1DEXT_wrp(texture,target,level,xoffset,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTextureSubImage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTextureSubImage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTextureSubImage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTextureSubImage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glCopyTextureSubImage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTextureSubImage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureSubImage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureSubImage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTextureSubImage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTextureSubImage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTextureSubImage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTextureSubImage1DEXT_Idx) = get_ts();
        }


	

}