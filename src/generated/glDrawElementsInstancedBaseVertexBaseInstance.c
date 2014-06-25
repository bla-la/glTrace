#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedBaseVertexBaseInstance_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex,GLuint baseinstance                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedBaseVertexBaseInstance_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex,GLuint baseinstance)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawElementsInstancedBaseVertexBaseInstance_Idx))
	{
            GL_ENTRY_PTR(glDrawElementsInstancedBaseVertexBaseInstance_Idx) = dlsym(RTLD_NEXT,"glDrawElementsInstancedBaseVertexBaseInstance");
            if(!GL_ENTRY_PTR(glDrawElementsInstancedBaseVertexBaseInstance_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedBaseVertexBaseInstance_wrp(mode,count,type,indices,instancecount,basevertex,baseinstance);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertexBaseInstance_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertexBaseInstance_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx));
        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedBaseVertexBaseInstance %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertexBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertexBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertexBaseInstance_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertexBaseInstance_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertexBaseInstance_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertexBaseInstance_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertexBaseInstance_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertexBaseInstance_Idx) = get_ts();
        }


	

}