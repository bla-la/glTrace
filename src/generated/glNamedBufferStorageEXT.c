#include <glTraceCommon.h>
#include <generated.h>

#define glNamedBufferStorageEXT_wrp						\
    ((void  (*)(GLuint buffer,GLsizeiptr size,const void *data,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glNamedBufferStorageEXT_Idx))


GLAPI void  APIENTRY glNamedBufferStorageEXT(GLuint buffer,GLsizeiptr size,const void *data,GLbitfield flags)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedBufferStorageEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedBufferStorageEXT_Idx) = dlsym(RTLD_NEXT,"glNamedBufferStorageEXT");
            if(!GL_ENTRY_PTR(glNamedBufferStorageEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedBufferStorageEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedBufferStorageEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedBufferStorageEXT_wrp(buffer,size,data,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedBufferStorageEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedBufferStorageEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedBufferStorageEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedBufferStorageEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedBufferStorageEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedBufferStorageEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedBufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferStorageEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferStorageEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedBufferStorageEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedBufferStorageEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedBufferStorageEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedBufferStorageEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedBufferStorageEXT_Idx) = get_ts();
        }


	

}