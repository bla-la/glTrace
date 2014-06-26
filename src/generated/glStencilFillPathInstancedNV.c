#include <glTraceCommon.h>
#include <generated.h>

#define glStencilFillPathInstancedNV_wrp						\
    ((void  (*)(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum fillMode,GLuint mask,GLenum transformType,const GLfloat *transformValues                                        \
    ))GL_ENTRY_PTR(glStencilFillPathInstancedNV_Idx))


GLAPI void  APIENTRY glStencilFillPathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum fillMode,GLuint mask,GLenum transformType,const GLfloat *transformValues)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glStencilFillPathInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilFillPathInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilFillPathInstancedNV_wrp(numPaths,pathNameType,paths,pathBase,fillMode,mask,transformType,transformValues);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilFillPathInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilFillPathInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilFillPathInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilFillPathInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glStencilFillPathInstancedNV_Idx));


        if(last_diff > 1000000000){
            printf("glStencilFillPathInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilFillPathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFillPathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilFillPathInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilFillPathInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilFillPathInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilFillPathInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilFillPathInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilFillPathInstancedNV_Idx) = get_ts();
        }


	

}