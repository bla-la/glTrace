#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferOffsetEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glBindBufferOffsetEXT_Idx))


GLAPI void  APIENTRY glBindBufferOffsetEXT(GLenum target,GLuint index,GLuint buffer,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glBindBufferOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glBindBufferOffsetEXT");
            if(!GL_ENTRY_PTR(glBindBufferOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferOffsetEXT_wrp(target,index,buffer,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferOffsetEXT_Idx) = get_ts();
        }


	

}