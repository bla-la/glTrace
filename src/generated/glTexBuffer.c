#include <glTraceCommon.h>
#include <generated.h>

#define glTexBuffer_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glTexBuffer_Idx))


GLAPI void  APIENTRY glTexBuffer(GLenum target,GLenum internalformat,GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBuffer_wrp(target,internalformat,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBuffer_Idx),
				 GL_ENTRY_LAST_TS(glTexBuffer_Idx));


        if(last_diff > 1000000000){
            printf("glTexBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glTexBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glTexBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBuffer_Idx) = get_ts();
        }


	

}