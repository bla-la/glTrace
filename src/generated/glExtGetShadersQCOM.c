#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetShadersQCOM_wrp						\
    ((void  (*)(GLuint *shaders,GLint maxShaders,GLint *numShaders                                        \
    ))GL_ENTRY_PTR(glExtGetShadersQCOM_Idx))


GLAPI void  APIENTRY glExtGetShadersQCOM(GLuint *shaders,GLint maxShaders,GLint *numShaders)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtGetShadersQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtGetShadersQCOM_Idx) = dlsym(RTLD_NEXT,"glExtGetShadersQCOM");
            if(!GL_ENTRY_PTR(glExtGetShadersQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtGetShadersQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetShadersQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetShadersQCOM_wrp(shaders,maxShaders,numShaders);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetShadersQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetShadersQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetShadersQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetShadersQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetShadersQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtGetShadersQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetShadersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetShadersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetShadersQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetShadersQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetShadersQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetShadersQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetShadersQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetShadersQCOM_Idx) = get_ts();
        }


	

}