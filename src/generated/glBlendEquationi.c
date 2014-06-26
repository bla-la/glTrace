#include <glTraceCommon.h>
#include <generated.h>

#define glBlendEquationi_wrp						\
    ((void  (*)(GLuint buf,GLenum mode                                        \
    ))GL_ENTRY_PTR(glBlendEquationi_Idx))


GLAPI void  APIENTRY glBlendEquationi(GLuint buf,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBlendEquationi_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlendEquationi_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlendEquationi_wrp(buf,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlendEquationi_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlendEquationi_Idx) ++;

        GL_ENTRY_LAST_TS(glBlendEquationi_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlendEquationi_Idx),
				 GL_ENTRY_LAST_TS(glBlendEquationi_Idx));


        if(last_diff > 1000000000){
            printf("glBlendEquationi %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlendEquationi_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationi_Idx),
	             GL_ENTRY_CALL_TIME(glBlendEquationi_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlendEquationi_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlendEquationi_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlendEquationi_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlendEquationi_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlendEquationi_Idx) = get_ts();
        }


	

}