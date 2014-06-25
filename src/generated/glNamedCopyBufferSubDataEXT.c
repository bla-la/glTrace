#include <glTraceCommon.h>
#include <generated.h>

#define glNamedCopyBufferSubDataEXT_wrp						\
    ((void  (*)(GLuint readBuffer,GLuint writeBuffer,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glNamedCopyBufferSubDataEXT_Idx))


GLAPI void  APIENTRY glNamedCopyBufferSubDataEXT(GLuint readBuffer,GLuint writeBuffer,GLintptr readOffset,GLintptr writeOffset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedCopyBufferSubDataEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedCopyBufferSubDataEXT_Idx) = dlsym(RTLD_NEXT,"glNamedCopyBufferSubDataEXT");
            if(!GL_ENTRY_PTR(glNamedCopyBufferSubDataEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedCopyBufferSubDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedCopyBufferSubDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedCopyBufferSubDataEXT_wrp(readBuffer,writeBuffer,readOffset,writeOffset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedCopyBufferSubDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedCopyBufferSubDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedCopyBufferSubDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedCopyBufferSubDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedCopyBufferSubDataEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedCopyBufferSubDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedCopyBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedCopyBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedCopyBufferSubDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedCopyBufferSubDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedCopyBufferSubDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedCopyBufferSubDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedCopyBufferSubDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedCopyBufferSubDataEXT_Idx) = get_ts();
        }


	

}