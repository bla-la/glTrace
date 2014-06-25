#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedBufferSubDataEXT_wrp						\
    ((void  (*)(GLuint buffer,GLintptr offset,GLsizeiptr size,void *data                                        \
    ))GL_ENTRY_PTR(glGetNamedBufferSubDataEXT_Idx))


GLAPI void  APIENTRY glGetNamedBufferSubDataEXT(GLuint buffer,GLintptr offset,GLsizeiptr size,void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedBufferSubDataEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedBufferSubDataEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedBufferSubDataEXT");
            if(!GL_ENTRY_PTR(glGetNamedBufferSubDataEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedBufferSubDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedBufferSubDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedBufferSubDataEXT_wrp(buffer,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedBufferSubDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedBufferSubDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedBufferSubDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedBufferSubDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedBufferSubDataEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedBufferSubDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedBufferSubDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedBufferSubDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedBufferSubDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedBufferSubDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedBufferSubDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedBufferSubDataEXT_Idx) = get_ts();
        }


	

}