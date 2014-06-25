#include <glTraceCommon.h>
#include <generated.h>

#define glClearNamedBufferDataEXT_wrp						\
    ((void  (*)(GLuint buffer,GLenum internalformat,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearNamedBufferDataEXT_Idx))


GLAPI void  APIENTRY glClearNamedBufferDataEXT(GLuint buffer,GLenum internalformat,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearNamedBufferDataEXT_Idx))
	{
            GL_ENTRY_PTR(glClearNamedBufferDataEXT_Idx) = dlsym(RTLD_NEXT,"glClearNamedBufferDataEXT");
            if(!GL_ENTRY_PTR(glClearNamedBufferDataEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearNamedBufferDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearNamedBufferDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearNamedBufferDataEXT_wrp(buffer,internalformat,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearNamedBufferDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearNamedBufferDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glClearNamedBufferDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearNamedBufferDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glClearNamedBufferDataEXT_Idx));
        if(last_diff > 1000000000){
            printf("glClearNamedBufferDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearNamedBufferDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearNamedBufferDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearNamedBufferDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearNamedBufferDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearNamedBufferDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearNamedBufferDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearNamedBufferDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearNamedBufferDataEXT_Idx) = get_ts();
        }


	

}