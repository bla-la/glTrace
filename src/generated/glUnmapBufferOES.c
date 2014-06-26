#include <glTraceCommon.h>
#include <generated.h>

#define glUnmapBufferOES_wrp						\
    ((GLboolean  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glUnmapBufferOES_Idx))


GLAPI GLboolean  APIENTRY glUnmapBufferOES(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUnmapBufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glUnmapBufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glUnmapBufferOES_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUnmapBufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUnmapBufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glUnmapBufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUnmapBufferOES_Idx),
				 GL_ENTRY_LAST_TS(glUnmapBufferOES_Idx));


        if(last_diff > 1000000000){
            printf("glUnmapBufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUnmapBufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapBufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glUnmapBufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glUnmapBufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUnmapBufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUnmapBufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUnmapBufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUnmapBufferOES_Idx) = get_ts();
        }


	return retval;

}