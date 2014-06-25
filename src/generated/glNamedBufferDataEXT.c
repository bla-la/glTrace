#include <glTraceCommon.h>
#include <generated.h>

#define glNamedBufferDataEXT_wrp						\
    ((void  (*)(GLuint buffer,GLsizeiptr size,const void *data,GLenum usage                                        \
    ))GL_ENTRY_PTR(glNamedBufferDataEXT_Idx))


GLAPI void  APIENTRY glNamedBufferDataEXT(GLuint buffer,GLsizeiptr size,const void *data,GLenum usage)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedBufferDataEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedBufferDataEXT_Idx) = dlsym(RTLD_NEXT,"glNamedBufferDataEXT");
            if(!GL_ENTRY_PTR(glNamedBufferDataEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedBufferDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedBufferDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedBufferDataEXT_wrp(buffer,size,data,usage);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedBufferDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedBufferDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedBufferDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedBufferDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedBufferDataEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedBufferDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedBufferDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedBufferDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedBufferDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedBufferDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedBufferDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedBufferDataEXT_Idx) = get_ts();
        }


	

}