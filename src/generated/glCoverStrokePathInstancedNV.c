#include <glTraceCommon.h>
#include <generated.h>

#define glCoverStrokePathInstancedNV_wrp						\
    ((void  (*)(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues                                        \
    ))GL_ENTRY_PTR(glCoverStrokePathInstancedNV_Idx))


GLAPI void  APIENTRY glCoverStrokePathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCoverStrokePathInstancedNV_Idx))
	{
            GL_ENTRY_PTR(glCoverStrokePathInstancedNV_Idx) = dlsym(RTLD_NEXT,"glCoverStrokePathInstancedNV");
            if(!GL_ENTRY_PTR(glCoverStrokePathInstancedNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCoverStrokePathInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCoverStrokePathInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCoverStrokePathInstancedNV_wrp(numPaths,pathNameType,paths,pathBase,coverMode,transformType,transformValues);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCoverStrokePathInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCoverStrokePathInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCoverStrokePathInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCoverStrokePathInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glCoverStrokePathInstancedNV_Idx));
        if(last_diff > 1000000000){
            printf("glCoverStrokePathInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCoverStrokePathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverStrokePathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverStrokePathInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCoverStrokePathInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCoverStrokePathInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCoverStrokePathInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCoverStrokePathInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCoverStrokePathInstancedNV_Idx) = get_ts();
        }


	

}