#include <glTraceCommon.h>
#include <generated.h>

#define glInvalidateBufferSubData_wrp						\
    ((void  (*)(GLuint buffer,GLintptr offset,GLsizeiptr length                                        \
    ))GL_ENTRY_PTR(glInvalidateBufferSubData_Idx))


GLAPI void  APIENTRY glInvalidateBufferSubData(GLuint buffer,GLintptr offset,GLsizeiptr length)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glInvalidateBufferSubData_Idx))
	{
            GL_ENTRY_PTR(glInvalidateBufferSubData_Idx) = dlsym(RTLD_NEXT,"glInvalidateBufferSubData");
            if(!GL_ENTRY_PTR(glInvalidateBufferSubData_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glInvalidateBufferSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glInvalidateBufferSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInvalidateBufferSubData_wrp(buffer,offset,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInvalidateBufferSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInvalidateBufferSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glInvalidateBufferSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInvalidateBufferSubData_Idx),
				 GL_ENTRY_LAST_TS(glInvalidateBufferSubData_Idx));
        if(last_diff > 1000000000){
            printf("glInvalidateBufferSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInvalidateBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateBufferSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glInvalidateBufferSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInvalidateBufferSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInvalidateBufferSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInvalidateBufferSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInvalidateBufferSubData_Idx) = get_ts();
        }


	

}