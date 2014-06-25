#include <glTraceCommon.h>
#include <generated.h>

#define glGenRenderbuffers_wrp						\
    ((void  (*)(GLsizei n,GLuint *renderbuffers                                        \
    ))GL_ENTRY_PTR(glGenRenderbuffers_Idx))


GLAPI void  APIENTRY glGenRenderbuffers(GLsizei n,GLuint *renderbuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenRenderbuffers_Idx))
	{
            GL_ENTRY_PTR(glGenRenderbuffers_Idx) = dlsym(RTLD_NEXT,"glGenRenderbuffers");
            if(!GL_ENTRY_PTR(glGenRenderbuffers_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenRenderbuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenRenderbuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenRenderbuffers_wrp(n,renderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenRenderbuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenRenderbuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glGenRenderbuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenRenderbuffers_Idx),
				 GL_ENTRY_LAST_TS(glGenRenderbuffers_Idx));
        if(last_diff > 1000000000){
            printf("glGenRenderbuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenRenderbuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenRenderbuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenRenderbuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenRenderbuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenRenderbuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenRenderbuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenRenderbuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenRenderbuffers_Idx) = get_ts();
        }


	

}