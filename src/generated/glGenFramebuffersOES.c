#include <glTraceCommon.h>
#include <generated.h>

#define glGenFramebuffersOES_wrp						\
    ((void  (*)(GLsizei n,GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glGenFramebuffersOES_Idx))


GLAPI void  APIENTRY glGenFramebuffersOES(GLsizei n,GLuint *framebuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenFramebuffersOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFramebuffersOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenFramebuffersOES_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFramebuffersOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFramebuffersOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFramebuffersOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFramebuffersOES_Idx),
				 GL_ENTRY_LAST_TS(glGenFramebuffersOES_Idx));


        if(last_diff > 1000000000){
            printf("glGenFramebuffersOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFramebuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffersOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFramebuffersOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFramebuffersOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFramebuffersOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFramebuffersOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFramebuffersOES_Idx) = get_ts();
        }


	

}