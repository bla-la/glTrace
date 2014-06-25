#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathSpacingNV_wrp						\
    ((void  (*)(GLenum pathListMode,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLfloat advanceScale,GLfloat kerningScale,GLenum transformType,GLfloat *returnedSpacing                                        \
    ))GL_ENTRY_PTR(glGetPathSpacingNV_Idx))


GLAPI void  APIENTRY glGetPathSpacingNV(GLenum pathListMode,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLfloat advanceScale,GLfloat kerningScale,GLenum transformType,GLfloat *returnedSpacing)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathSpacingNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathSpacingNV_Idx) = dlsym(RTLD_NEXT,"glGetPathSpacingNV");
            if(!GL_ENTRY_PTR(glGetPathSpacingNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathSpacingNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathSpacingNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathSpacingNV_wrp(pathListMode,numPaths,pathNameType,paths,pathBase,advanceScale,kerningScale,transformType,returnedSpacing);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathSpacingNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathSpacingNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathSpacingNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathSpacingNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathSpacingNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathSpacingNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathSpacingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathSpacingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathSpacingNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathSpacingNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathSpacingNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathSpacingNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathSpacingNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathSpacingNV_Idx) = get_ts();
        }


	

}