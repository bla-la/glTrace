#include <glTraceCommon.h>
#include <generated.h>

#define glGetTextureHandleNV_wrp						\
    ((GLuint64  (*)(GLuint texture                                        \
    ))GL_ENTRY_PTR(glGetTextureHandleNV_Idx))


GLAPI GLuint64  APIENTRY glGetTextureHandleNV(GLuint texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTextureHandleNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTextureHandleNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint64  retval = glGetTextureHandleNV_wrp(texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTextureHandleNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTextureHandleNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTextureHandleNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTextureHandleNV_Idx),
				 GL_ENTRY_LAST_TS(glGetTextureHandleNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetTextureHandleNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTextureHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureHandleNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTextureHandleNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTextureHandleNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTextureHandleNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTextureHandleNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTextureHandleNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTextureHandleNV_Idx) = get_ts();
        }


	return retval;

}