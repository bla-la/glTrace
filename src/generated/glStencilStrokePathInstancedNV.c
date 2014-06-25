#include <glTraceCommon.h>
#include <generated.h>

#define glStencilStrokePathInstancedNV_wrp						\
    ((void  (*)(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLint reference,GLuint mask,GLenum transformType,const GLfloat *transformValues                                        \
    ))GL_ENTRY_PTR(glStencilStrokePathInstancedNV_Idx))


GLAPI void  APIENTRY glStencilStrokePathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLint reference,GLuint mask,GLenum transformType,const GLfloat *transformValues)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glStencilStrokePathInstancedNV_Idx))
	{
            GL_ENTRY_PTR(glStencilStrokePathInstancedNV_Idx) = dlsym(RTLD_NEXT,"glStencilStrokePathInstancedNV");
            if(!GL_ENTRY_PTR(glStencilStrokePathInstancedNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glStencilStrokePathInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glStencilStrokePathInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glStencilStrokePathInstancedNV_wrp(numPaths,pathNameType,paths,pathBase,reference,mask,transformType,transformValues);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glStencilStrokePathInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glStencilStrokePathInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glStencilStrokePathInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glStencilStrokePathInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glStencilStrokePathInstancedNV_Idx));
        if(last_diff > 1000000000){
            printf("glStencilStrokePathInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glStencilStrokePathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilStrokePathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glStencilStrokePathInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glStencilStrokePathInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glStencilStrokePathInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glStencilStrokePathInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glStencilStrokePathInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glStencilStrokePathInstancedNV_Idx) = get_ts();
        }


	

}