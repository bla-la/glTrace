#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferOffsetNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glBindBufferOffsetNV_Idx))


GLAPI void  APIENTRY glBindBufferOffsetNV(GLenum target,GLuint index,GLuint buffer,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindBufferOffsetNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferOffsetNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferOffsetNV_wrp(target,index,buffer,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferOffsetNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferOffsetNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferOffsetNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferOffsetNV_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferOffsetNV_Idx));


        if(last_diff > 1000000000){
            printf("glBindBufferOffsetNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferOffsetNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferOffsetNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferOffsetNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferOffsetNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferOffsetNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferOffsetNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferOffsetNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferOffsetNV_Idx) = get_ts();
        }


	

}