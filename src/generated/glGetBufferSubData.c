#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferSubData_wrp						\
    ((void  (*)(GLenum target,GLintptr offset,GLsizeiptr size,void *data                                        \
    ))GL_ENTRY_PTR(glGetBufferSubData_Idx))


GLAPI void  APIENTRY glGetBufferSubData(GLenum target,GLintptr offset,GLsizeiptr size,void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBufferSubData_Idx))
	{
            GL_ENTRY_PTR(glGetBufferSubData_Idx) = dlsym(RTLD_NEXT,"glGetBufferSubData");
            if(!GL_ENTRY_PTR(glGetBufferSubData_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBufferSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferSubData_wrp(target,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferSubData_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferSubData_Idx));
        if(last_diff > 1000000000){
            printf("glGetBufferSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferSubData_Idx) = get_ts();
        }


	

}