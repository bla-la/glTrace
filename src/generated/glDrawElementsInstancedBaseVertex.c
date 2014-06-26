#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedBaseVertex_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedBaseVertex_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedBaseVertex(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei instancecount,GLint basevertex)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertex_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedBaseVertex_wrp(mode,count,type,indices,instancecount,basevertex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertex_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseVertex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertex_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedBaseVertex_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedBaseVertex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertex_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedBaseVertex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedBaseVertex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedBaseVertex_Idx) = get_ts();
        }


	

}