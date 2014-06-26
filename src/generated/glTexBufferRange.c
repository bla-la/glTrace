#include <glTraceCommon.h>
#include <generated.h>

#define glTexBufferRange_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glTexBufferRange_Idx))


GLAPI void  APIENTRY glTexBufferRange(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexBufferRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBufferRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBufferRange_wrp(target,internalformat,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBufferRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBufferRange_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBufferRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBufferRange_Idx),
				 GL_ENTRY_LAST_TS(glTexBufferRange_Idx));


        if(last_diff > 1000000000){
            printf("glTexBufferRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBufferRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBufferRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBufferRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBufferRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBufferRange_Idx) = get_ts();
        }


	

}