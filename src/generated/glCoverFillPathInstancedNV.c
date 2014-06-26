#include <glTraceCommon.h>
#include <generated.h>

#define glCoverFillPathInstancedNV_wrp						\
    ((void  (*)(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues                                        \
    ))GL_ENTRY_PTR(glCoverFillPathInstancedNV_Idx))


GLAPI void  APIENTRY glCoverFillPathInstancedNV(GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLenum coverMode,GLenum transformType,const GLfloat *transformValues)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCoverFillPathInstancedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCoverFillPathInstancedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCoverFillPathInstancedNV_wrp(numPaths,pathNameType,paths,pathBase,coverMode,transformType,transformValues);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCoverFillPathInstancedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCoverFillPathInstancedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCoverFillPathInstancedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCoverFillPathInstancedNV_Idx),
				 GL_ENTRY_LAST_TS(glCoverFillPathInstancedNV_Idx));


        if(last_diff > 1000000000){
            printf("glCoverFillPathInstancedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCoverFillPathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverFillPathInstancedNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverFillPathInstancedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCoverFillPathInstancedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCoverFillPathInstancedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCoverFillPathInstancedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCoverFillPathInstancedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCoverFillPathInstancedNV_Idx) = get_ts();
        }


	

}