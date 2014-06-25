#include <glTraceCommon.h>
#include <generated.h>

#define glBindBufferBase_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glBindBufferBase_Idx))


GLAPI void  APIENTRY glBindBufferBase(GLenum target,GLuint index,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindBufferBase_Idx))
	{
            GL_ENTRY_PTR(glBindBufferBase_Idx) = dlsym(RTLD_NEXT,"glBindBufferBase");
            if(!GL_ENTRY_PTR(glBindBufferBase_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindBufferBase_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBufferBase_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBufferBase_wrp(target,index,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBufferBase_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBufferBase_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBufferBase_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBufferBase_Idx),
				 GL_ENTRY_LAST_TS(glBindBufferBase_Idx));
        if(last_diff > 1000000000){
            printf("glBindBufferBase %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBufferBase_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBase_Idx),
	             GL_ENTRY_CALL_TIME(glBindBufferBase_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBufferBase_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBufferBase_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBufferBase_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBufferBase_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBufferBase_Idx) = get_ts();
        }


	

}