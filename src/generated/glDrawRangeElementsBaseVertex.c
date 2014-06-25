#include <glTraceCommon.h>
#include <generated.h>

#define glDrawRangeElementsBaseVertex_wrp						\
    ((void  (*)(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex                                        \
    ))GL_ENTRY_PTR(glDrawRangeElementsBaseVertex_Idx))


GLAPI void  APIENTRY glDrawRangeElementsBaseVertex(GLenum mode,GLuint start,GLuint end,GLsizei count,GLenum type,const void *indices,GLint basevertex)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawRangeElementsBaseVertex_Idx))
	{
            GL_ENTRY_PTR(glDrawRangeElementsBaseVertex_Idx) = dlsym(RTLD_NEXT,"glDrawRangeElementsBaseVertex");
            if(!GL_ENTRY_PTR(glDrawRangeElementsBaseVertex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawRangeElementsBaseVertex_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawRangeElementsBaseVertex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawRangeElementsBaseVertex_wrp(mode,start,end,count,type,indices,basevertex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawRangeElementsBaseVertex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawRangeElementsBaseVertex_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawRangeElementsBaseVertex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawRangeElementsBaseVertex_Idx),
				 GL_ENTRY_LAST_TS(glDrawRangeElementsBaseVertex_Idx));
        if(last_diff > 1000000000){
            printf("glDrawRangeElementsBaseVertex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glDrawRangeElementsBaseVertex_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawRangeElementsBaseVertex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawRangeElementsBaseVertex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawRangeElementsBaseVertex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawRangeElementsBaseVertex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawRangeElementsBaseVertex_Idx) = get_ts();
        }


	

}