#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsBaseVertex_wrp						\
    ((void  (*)(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount,const GLint *basevertex                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsBaseVertex_Idx))


GLAPI void  APIENTRY glMultiDrawElementsBaseVertex(GLenum mode,const GLsizei *count,GLenum type,const void *const*indices,GLsizei drawcount,const GLint *basevertex)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsBaseVertex_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsBaseVertex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsBaseVertex_wrp(mode,count,type,indices,drawcount,basevertex);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsBaseVertex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsBaseVertex_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsBaseVertex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsBaseVertex_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsBaseVertex_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElementsBaseVertex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsBaseVertex_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsBaseVertex_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsBaseVertex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsBaseVertex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsBaseVertex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsBaseVertex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsBaseVertex_Idx) = get_ts();
        }


	

}