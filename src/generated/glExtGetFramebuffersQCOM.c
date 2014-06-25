#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetFramebuffersQCOM_wrp						\
    ((void  (*)(GLuint *framebuffers,GLint maxFramebuffers,GLint *numFramebuffers                                        \
    ))GL_ENTRY_PTR(glExtGetFramebuffersQCOM_Idx))


GLAPI void  APIENTRY glExtGetFramebuffersQCOM(GLuint *framebuffers,GLint maxFramebuffers,GLint *numFramebuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glExtGetFramebuffersQCOM_Idx))
	{
            GL_ENTRY_PTR(glExtGetFramebuffersQCOM_Idx) = dlsym(RTLD_NEXT,"glExtGetFramebuffersQCOM");
            if(!GL_ENTRY_PTR(glExtGetFramebuffersQCOM_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glExtGetFramebuffersQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetFramebuffersQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetFramebuffersQCOM_wrp(framebuffers,maxFramebuffers,numFramebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetFramebuffersQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetFramebuffersQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetFramebuffersQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetFramebuffersQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetFramebuffersQCOM_Idx));
        if(last_diff > 1000000000){
            printf("glExtGetFramebuffersQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetFramebuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetFramebuffersQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetFramebuffersQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetFramebuffersQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetFramebuffersQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetFramebuffersQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetFramebuffersQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetFramebuffersQCOM_Idx) = get_ts();
        }


	

}