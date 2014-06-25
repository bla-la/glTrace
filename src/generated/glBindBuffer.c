#include <glTraceCommon.h>
#include <generated.h>

#define glBindBuffer_wrp						\
    ((void  (*)(GLenum target,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glBindBuffer_Idx))


GLAPI void  APIENTRY glBindBuffer(GLenum target,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBuffer_Idx))
	{
            GL_ENTRY_PTR(glBindBuffer_Idx) = dlsym(RTLD_NEXT,"glBindBuffer");
            if(!GL_ENTRY_PTR(glBindBuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBuffer_wrp(target,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBuffer_Idx),
				 GL_ENTRY_LAST_TS(glBindBuffer_Idx));
        if(last_diff > 1000000000){
            printf("glBindBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBuffer_Idx) = get_ts();
        }


	

}