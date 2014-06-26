#include <glTraceCommon.h>
#include <generated.h>

#define glGetImageHandleNV_wrp						\
    ((GLuint64  (*)(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format                                        \
    ))GL_ENTRY_PTR(glGetImageHandleNV_Idx))


GLAPI GLuint64  APIENTRY glGetImageHandleNV(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetImageHandleNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetImageHandleNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint64  retval = glGetImageHandleNV_wrp(texture,level,layered,layer,format);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetImageHandleNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetImageHandleNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetImageHandleNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetImageHandleNV_Idx),
				 GL_ENTRY_LAST_TS(glGetImageHandleNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetImageHandleNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetImageHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageHandleNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetImageHandleNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetImageHandleNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetImageHandleNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetImageHandleNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetImageHandleNV_Idx) = get_ts();
        }


	return retval;

}