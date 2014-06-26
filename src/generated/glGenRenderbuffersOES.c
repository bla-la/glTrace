#include <glTraceCommon.h>
#include <generated.h>

#define glGenRenderbuffersOES_wrp						\
    ((void  (*)(GLsizei n,GLuint *renderbuffers                                        \
    ))GL_ENTRY_PTR(glGenRenderbuffersOES_Idx))


GLAPI void  APIENTRY glGenRenderbuffersOES(GLsizei n,GLuint *renderbuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenRenderbuffersOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenRenderbuffersOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenRenderbuffersOES_wrp(n,renderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenRenderbuffersOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenRenderbuffersOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGenRenderbuffersOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenRenderbuffersOES_Idx),
				 GL_ENTRY_LAST_TS(glGenRenderbuffersOES_Idx));


        if(last_diff > 1000000000){
            printf("glGenRenderbuffersOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenRenderbuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenRenderbuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glGenRenderbuffersOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenRenderbuffersOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenRenderbuffersOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenRenderbuffersOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenRenderbuffersOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenRenderbuffersOES_Idx) = get_ts();
        }


	

}