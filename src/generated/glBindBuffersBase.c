#include <glTraceCommon.h>
#include <generated.h>

#define glBindBuffersBase_wrp						\
    ((void  (*)(GLenum target,GLuint first,GLsizei count,const GLuint *buffers                                        \
    ))GL_ENTRY_PTR(glBindBuffersBase_Idx))


GLAPI void  APIENTRY glBindBuffersBase(GLenum target,GLuint first,GLsizei count,const GLuint *buffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindBuffersBase_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBuffersBase_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBuffersBase_wrp(target,first,count,buffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBuffersBase_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBuffersBase_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBuffersBase_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBuffersBase_Idx),
				 GL_ENTRY_LAST_TS(glBindBuffersBase_Idx));


        if(last_diff > 1000000000){
            printf("glBindBuffersBase %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBuffersBase_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffersBase_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffersBase_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBuffersBase_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBuffersBase_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBuffersBase_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBuffersBase_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBuffersBase_Idx) = get_ts();
        }


	

}