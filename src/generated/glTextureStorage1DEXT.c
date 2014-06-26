#include <glTraceCommon.h>
#include <generated.h>

#define glTextureStorage1DEXT_wrp						\
    ((void  (*)(GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width                                        \
    ))GL_ENTRY_PTR(glTextureStorage1DEXT_Idx))


GLAPI void  APIENTRY glTextureStorage1DEXT(GLuint texture,GLenum target,GLsizei levels,GLenum internalformat,GLsizei width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTextureStorage1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTextureStorage1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTextureStorage1DEXT_wrp(texture,target,levels,internalformat,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTextureStorage1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTextureStorage1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTextureStorage1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTextureStorage1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glTextureStorage1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTextureStorage1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTextureStorage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTextureStorage1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTextureStorage1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTextureStorage1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTextureStorage1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTextureStorage1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTextureStorage1DEXT_Idx) = get_ts();
        }


	

}