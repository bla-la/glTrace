#include <glTraceCommon.h>
#include <generated.h>

#define glClearBufferData_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearBufferData_Idx))


GLAPI void  APIENTRY glClearBufferData(GLenum target,GLenum internalformat,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearBufferData_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearBufferData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearBufferData_wrp(target,internalformat,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearBufferData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearBufferData_Idx) ++;

        GL_ENTRY_LAST_TS(glClearBufferData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearBufferData_Idx),
				 GL_ENTRY_LAST_TS(glClearBufferData_Idx));


        if(last_diff > 1000000000){
            printf("glClearBufferData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferData_Idx),
	             GL_ENTRY_CALL_TIME(glClearBufferData_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearBufferData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearBufferData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearBufferData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearBufferData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearBufferData_Idx) = get_ts();
        }


	

}