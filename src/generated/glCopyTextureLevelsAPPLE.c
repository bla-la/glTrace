#include <glTraceCommon.h>
#include <generated.h>

#define glCopyTextureLevelsAPPLE_wrp						\
    ((void  (*)(GLuint destinationTexture,GLuint sourceTexture,GLint sourceBaseLevel,GLsizei sourceLevelCount                                        \
    ))GL_ENTRY_PTR(glCopyTextureLevelsAPPLE_Idx))


GLAPI void  APIENTRY glCopyTextureLevelsAPPLE(GLuint destinationTexture,GLuint sourceTexture,GLint sourceBaseLevel,GLsizei sourceLevelCount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyTextureLevelsAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyTextureLevelsAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyTextureLevelsAPPLE_wrp(destinationTexture,sourceTexture,sourceBaseLevel,sourceLevelCount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyTextureLevelsAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyTextureLevelsAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyTextureLevelsAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyTextureLevelsAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glCopyTextureLevelsAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glCopyTextureLevelsAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyTextureLevelsAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureLevelsAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glCopyTextureLevelsAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyTextureLevelsAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyTextureLevelsAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyTextureLevelsAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyTextureLevelsAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyTextureLevelsAPPLE_Idx) = get_ts();
        }


	

}