#include <glTraceCommon.h>
#include <generated.h>

#define glGetStringi_wrp						\
    ((const GLubyte * (*)(GLenum name,GLuint index                                        \
    ))GL_ENTRY_PTR(glGetStringi_Idx))


GLAPI const GLubyte * APIENTRY glGetStringi(GLenum name,GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetStringi_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetStringi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	const GLubyte * retval = glGetStringi_wrp(name,index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetStringi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetStringi_Idx) ++;

        GL_ENTRY_LAST_TS(glGetStringi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetStringi_Idx),
				 GL_ENTRY_LAST_TS(glGetStringi_Idx));


        if(last_diff > 1000000000){
            printf("glGetStringi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetStringi_Idx),
	             GL_ENTRY_CALL_TIME(glGetStringi_Idx),
	             GL_ENTRY_CALL_TIME(glGetStringi_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetStringi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetStringi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetStringi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetStringi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetStringi_Idx) = get_ts();
        }


	return retval;

}