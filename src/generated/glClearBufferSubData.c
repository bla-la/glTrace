#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferSubData_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearBufferSubData_Idx))


GLAPI void  APIENTRY glClearBufferSubData(GLenum target,GLenum internalformat,GLintptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearBufferSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferSubData_wrp(target,internalformat,offset,size,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferSubData_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferSubData_Idx));


        if(last_diff > 1000000000){
            printf("glClearBufferSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferSubData_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferSubData_Idx) = get_ts();
        }


	

}