#include <glTraceCommon.h>
#include <generated.h>

#define glClearNamedBufferSubDataEXT_wrp						\
    ((void  (*)(GLuint buffer,GLenum internalformat,GLsizeiptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data                                        \
    ))GL_ENTRY_PTR(glClearNamedBufferSubDataEXT_Idx))


GLAPI void  APIENTRY glClearNamedBufferSubDataEXT(GLuint buffer,GLenum internalformat,GLsizeiptr offset,GLsizeiptr size,GLenum format,GLenum type,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearNamedBufferSubDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearNamedBufferSubDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearNamedBufferSubDataEXT_wrp(buffer,internalformat,offset,size,format,type,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearNamedBufferSubDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearNamedBufferSubDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glClearNamedBufferSubDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearNamedBufferSubDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glClearNamedBufferSubDataEXT_Idx));


        if(last_diff > 1000000000){
            printf("glClearNamedBufferSubDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glClearNamedBufferSubDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearNamedBufferSubDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearNamedBufferSubDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearNamedBufferSubDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearNamedBufferSubDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearNamedBufferSubDataEXT_Idx) = get_ts();
        }


	

}