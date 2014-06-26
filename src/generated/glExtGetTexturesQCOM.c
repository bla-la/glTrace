#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetTexturesQCOM_wrp						\
    ((void  (*)(GLuint *textures,GLint maxTextures,GLint *numTextures                                        \
    ))GL_ENTRY_PTR(glExtGetTexturesQCOM_Idx))


GLAPI void  APIENTRY glExtGetTexturesQCOM(GLuint *textures,GLint maxTextures,GLint *numTextures)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtGetTexturesQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetTexturesQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetTexturesQCOM_wrp(textures,maxTextures,numTextures);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetTexturesQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetTexturesQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetTexturesQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetTexturesQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetTexturesQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtGetTexturesQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetTexturesQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexturesQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetTexturesQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetTexturesQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetTexturesQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetTexturesQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetTexturesQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetTexturesQCOM_Idx) = get_ts();
        }


	

}