#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferRangeNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glBindBufferRangeNV_Idx))


GLAPI void  APIENTRY glBindBufferRangeNV(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferRangeNV_Idx))
	{
            GL_ENTRY_PTR(glBindBufferRangeNV_Idx) = dlsym(RTLD_NEXT,"glBindBufferRangeNV");
            if(!GL_ENTRY_PTR(glBindBufferRangeNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferRangeNV_wrp(target,index,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferRangeNV_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferRangeNV_Idx) = get_ts();
        }


	

}