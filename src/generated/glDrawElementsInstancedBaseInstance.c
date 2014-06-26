#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedBaseInstance_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLuint baseinstance                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedBaseInstance_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedBaseInstance(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLuint baseinstance)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseInstance_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseInstance_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedBaseInstance_wrp(mode,count,type,indices,instancecount,baseinstance);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseInstance_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseInstance_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseInstance_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseInstance_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseInstance_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedBaseInstance %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseInstance_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseInstance_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseInstance_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseInstance_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseInstance_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseInstance_Idx) = get_ts();
        }


	

}