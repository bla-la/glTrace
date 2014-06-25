#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferRange_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glBindBufferRange_Idx))


GLAPI void  APIENTRY glBindBufferRange(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferRange_Idx))
	{
            GL_ENTRY_PTR(glBindBufferRange_Idx) = dlsym(RTLD_NEXT,"glBindBufferRange");
            if(!GL_ENTRY_PTR(glBindBufferRange_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferRange_wrp(target,index,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferRange_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferRange_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferRange_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferRange_Idx) = get_ts();
        }


	

}