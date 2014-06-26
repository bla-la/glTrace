#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsBaseVertex_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex                                        \
    ))GL_ENTRY_PTR(glDrawElementsBaseVertex_Idx))


GLAPI void  APIENTRY glDrawElementsBaseVertex(GLenum mode,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementsBaseVertex_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsBaseVertex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsBaseVertex_wrp(mode,count,type,indices,basevertex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsBaseVertex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsBaseVertex_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsBaseVertex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsBaseVertex_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsBaseVertex_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementsBaseVertex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsBaseVertex_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsBaseVertex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsBaseVertex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsBaseVertex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsBaseVertex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsBaseVertex_Idx) = get_ts();
        }


	

}