#include <glTraceCommon.h>
#include <generated.h>

#define glGetImageHandleARB_wrp						\
    ((GLuint64  (*)(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format                                        \
    ))GL_ENTRY_PTR(glGetImageHandleARB_Idx))


GLAPI GLuint64  APIENTRY glGetImageHandleARB(GLuint texture,GLint level,GLboolean layered,GLint layer,GLenum format)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetImageHandleARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetImageHandleARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint64  retval = glGetImageHandleARB_wrp(texture,level,layered,layer,format);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetImageHandleARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetImageHandleARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetImageHandleARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetImageHandleARB_Idx),
				 GL_ENTRY_LAST_TS(glGetImageHandleARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetImageHandleARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetImageHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetImageHandleARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetImageHandleARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetImageHandleARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetImageHandleARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetImageHandleARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetImageHandleARB_Idx) = get_ts();
        }


	return retval;

}