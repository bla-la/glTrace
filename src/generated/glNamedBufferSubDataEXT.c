#include <glTraceCommon.h>
#include <generated.h>

#define glNamedBufferSubDataEXT_wrp						\
    ((void  (*)(GLuint buffer,GLintptr offset,GLsizeiptr size,const void *data                                        \
    ))GL_ENTRY_PTR(glNamedBufferSubDataEXT_Idx))


GLAPI void  APIENTRY glNamedBufferSubDataEXT(GLuint buffer,GLintptr offset,GLsizeiptr size,const void *data)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedBufferSubDataEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedBufferSubDataEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedBufferSubDataEXT_wrp(buffer,offset,size,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedBufferSubDataEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedBufferSubDataEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedBufferSubDataEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedBufferSubDataEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedBufferSubDataEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedBufferSubDataEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferSubDataEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedBufferSubDataEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedBufferSubDataEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedBufferSubDataEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedBufferSubDataEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedBufferSubDataEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedBufferSubDataEXT_Idx) = get_ts();
        }


	

}