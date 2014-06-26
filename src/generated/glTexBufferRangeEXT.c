#include <glTraceCommon.h>
#include <generated.h>

#define glTexBufferRangeEXT_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glTexBufferRangeEXT_Idx))


GLAPI void  APIENTRY glTexBufferRangeEXT(GLenum target,GLenum internalformat,GLuint buffer,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTexBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTexBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTexBufferRangeEXT_wrp(target,internalformat,buffer,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTexBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTexBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTexBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTexBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glTexBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTexBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTexBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTexBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTexBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTexBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTexBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTexBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTexBufferRangeEXT_Idx) = get_ts();
        }


	

}