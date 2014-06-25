#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferRangeEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glBindBufferRangeEXT_Idx))


GLAPI void  APIENTRY glBindBufferRangeEXT(GLenum target,GLuint index,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferRangeEXT_Idx))
	{
            GL_ENTRY_PTR(glBindBufferRangeEXT_Idx) = dlsym(RTLD_NEXT,"glBindBufferRangeEXT");
            if(!GL_ENTRY_PTR(glBindBufferRangeEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferRangeEXT_wrp(target,index,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferRangeEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferRangeEXT_Idx) = get_ts();
        }


	

}