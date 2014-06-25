#include <glTraceCommon.h>
#include <generated.h>

#define glBufferSubData_wrp						\
    ((void  (*)(GLenum target,GLintptr offset,GLsizeiptr size,const void *data                                        \
    ))GL_ENTRY_PTR(glBufferSubData_Idx))


GLAPI void  APIENTRY glBufferSubData(GLenum target,GLintptr offset,GLsizeiptr size,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBufferSubData_Idx))
	{
            GL_ENTRY_PTR(glBufferSubData_Idx) = dlsym(RTLD_NEXT,"glBufferSubData");
            if(!GL_ENTRY_PTR(glBufferSubData_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBufferSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glBufferSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBufferSubData_wrp(target,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBufferSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBufferSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glBufferSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBufferSubData_Idx),
				 GL_ENTRY_LAST_TS(glBufferSubData_Idx));
        if(last_diff > 1000000000){
            printf("glBufferSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glBufferSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glBufferSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBufferSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBufferSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBufferSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBufferSubData_Idx) = get_ts();
        }


	

}