#include <glTraceCommon.h>
#include <generated.h>

#define glSelectBuffer_wrp						\
    ((void  (*)(GLsizei size,GLuint *buffer                                        \
    ))GL_ENTRY_PTR(glSelectBuffer_Idx))


GLAPI void  APIENTRY glSelectBuffer(GLsizei size,GLuint *buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSelectBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glSelectBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSelectBuffer_wrp(size,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSelectBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSelectBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glSelectBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSelectBuffer_Idx),
				 GL_ENTRY_LAST_TS(glSelectBuffer_Idx));


        if(last_diff > 1000000000){
            printf("glSelectBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSelectBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glSelectBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glSelectBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glSelectBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSelectBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSelectBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSelectBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSelectBuffer_Idx) = get_ts();
        }


	

}