#include <glTraceCommon.h>
#include <generated.h>

#define glCopyBufferSubData_wrp						\
    ((void  (*)(GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glCopyBufferSubData_Idx))


GLAPI void  APIENTRY glCopyBufferSubData(GLenum readTarget,GLenum writeTarget,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyBufferSubData_Idx))
	{
            GL_ENTRY_PTR(glCopyBufferSubData_Idx) = dlsym(RTLD_NEXT,"glCopyBufferSubData");
            if(!GL_ENTRY_PTR(glCopyBufferSubData_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyBufferSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyBufferSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyBufferSubData_wrp(readTarget,writeTarget,readOffset,writeOffset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyBufferSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyBufferSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyBufferSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyBufferSubData_Idx),
				 GL_ENTRY_LAST_TS(glCopyBufferSubData_Idx));
        if(last_diff > 1000000000){
            printf("glCopyBufferSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glCopyBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glCopyBufferSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyBufferSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyBufferSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyBufferSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyBufferSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyBufferSubData_Idx) = get_ts();
        }


	

}