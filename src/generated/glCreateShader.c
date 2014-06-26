#include <glTraceCommon.h>
#include <generated.h>

#define glCreateShader_wrp						\
    ((GLuint  (*)(GLenum type                                        \
    ))GL_ENTRY_PTR(glCreateShader_Idx))


GLAPI GLuint  APIENTRY glCreateShader(GLenum type)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCreateShader_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreateShader_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glCreateShader_wrp(type);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreateShader_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreateShader_Idx) ++;

        GL_ENTRY_LAST_TS(glCreateShader_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreateShader_Idx),
				 GL_ENTRY_LAST_TS(glCreateShader_Idx));


        if(last_diff > 1000000000){
            printf("glCreateShader %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreateShader_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShader_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShader_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreateShader_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreateShader_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreateShader_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreateShader_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreateShader_Idx) = get_ts();
        }


	return retval;

}