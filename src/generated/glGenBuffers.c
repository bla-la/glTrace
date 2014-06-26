#include <glTraceCommon.h>
#include <generated.h>

#define glGenBuffers_wrp						\
    ((void  (*)(GLsizei n,GLuint *buffers                                        \
    ))GL_ENTRY_PTR(glGenBuffers_Idx))


GLAPI void  APIENTRY glGenBuffers(GLsizei n,GLuint *buffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenBuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenBuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenBuffers_wrp(n,buffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenBuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenBuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glGenBuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenBuffers_Idx),
				 GL_ENTRY_LAST_TS(glGenBuffers_Idx));


        if(last_diff > 1000000000){
            printf("glGenBuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenBuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenBuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenBuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenBuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenBuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenBuffers_Idx) = get_ts();
        }


	

}